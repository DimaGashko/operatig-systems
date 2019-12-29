#include <stdlib.h>

void help() {
   printf("Find the area of some figures /n");
   printf("> square\n");
   printf("> rectangle\n");
   printf("> triangle\n");
   printf("> circle\n");
   printf("\n");
   printf("> help \n");
   printf("> exit \n");
   printf("\n");
}

void run() {
   char cmd[256];
   
   while (1) {
      scanf("%s", cmd);

      if (cmd == "exit") {
         break;
      }
      else if (cmd == "help") {
         help();
      }
   }

   printf("Have a good day!\n");
}

int main(int argc, char **argv) {
   help();
   run();
   return 0;
}
