#include <stdlib.h>
#include <stdio.h>
#include <strings.h>

void run();
void help();

void square();
void rectangle();
void triangle();
void circle();

void runSquare();
void runRectangle();
void runTriangle();
void runCircle();

int main(int argc, char **argv) {
   help();
   run();
   return 0;
}

void run() {
   char cmd[256];
   
   while (1) {
      printf("> ");
      scanf("%s", cmd);

      if (strcasecmp(cmd, "square") == 0) {
         runSquare();
      }
      else if (strcasecmp(cmd, "rectangle") == 0) {
         runRectangle();
      }
      else if (strcasecmp(cmd, "triangle") == 0) {
         runTriangle();
      }
      else if (strcasecmp(cmd, "circle") == 0) {
         runCircle();
      }
      else if (strcasecmp(cmd, "help") == 0) {
         help();
      }
      else if (strcasecmp(cmd, "exit") == 0) {
         break;
      }
      else {
         printf("Unknown command. Enter help to see list of commands\n");
      }
   }

   printf("Have a good day!\n");
}

void runSquare() {
   printf("Enter variables: a\n");
   printf("a = \n");
}

void runRectangle() {
   printf("Enter variables: a, b\n");
   printf("a = \n");
   printf("b = \n");
}

void runTriangle() {
   printf("Enter variables: a, b, c\n");
   printf("a = \n");
   printf("b = \n");
   printf("c = \n");
}

void runCircle() {
   printf("Enter variables: r\n");
   printf("r = \n");
}

void square() {

}

void rectangle() {
   
}

void triangle() {
   
}

void circle() {
   
}

void help() {
   printf("Find the area of some figures \n");
   printf("> square\n");
   printf("> rectangle\n");
   printf("> triangle\n");
   printf("> circle\n");
   printf("\n");
   printf("> help \n");
   printf("> exit \n");
   printf("- - -\n\n");
}