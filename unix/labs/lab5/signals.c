#include <stdio.h>
#include <signal.h>
#include <unistd.h>

int count = 0;

void signalsHandler() {
   printf("SIGINTreceived %d times\n", ++count);
}

int main() {
   signal(SIGINT, signalsHandler);

   while (1) {
      sleep(10);
   }

   return 0;
}