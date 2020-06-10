#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <sys/types.h>

#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

int count = 0;
const char *pipePath = "/tmp/epic-pipe-3";

void signalsHandler() {
   printf("SIGINTreceived %d times\n", ++count);

   char msg[80];
   sprintf(msg, "SIGINT id recied %d times", count);

   int fd = open(pipePath, O_WRONLY);
   write(fd, msg, 80);
   close(fd);
}

int main() {
   mkfifo(pipePath, 0666);
   signal(SIGINT, signalsHandler);

   while (1) {
      sleep(10);
   }

   return 0;
}