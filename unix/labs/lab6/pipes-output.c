#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <sys/types.h>

#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

int count = 0;
const char *pipePath = "/tmp/epic-pipe-3";

int main() {
   mkfifo(pipePath, 0666);

   char msg[80];

   while (1) {
      int fd = open(pipePath, O_RDONLY);
      read(fd, msg, 80);

      printf("Msg: %s\n", msg);
      close(fd);
   }

   return 0;
}