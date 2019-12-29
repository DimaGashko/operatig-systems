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
         square();
      }
      if (strcasecmp(cmd, "rectangle") == 0) {
         rectangle();
      }
      if (strcasecmp(cmd, "triangle") == 0) {
         triangle();
      }
      if (strcasecmp(cmd, "circle") == 0) {
         circle();
      }
      else if (strcasecmp(cmd, "help") == 0) {
         help();
      }
      else if (strcasecmp(cmd, "exit") == 0) {
         break;
      }
   }

   printf("Have a good day!\n");
}

void runSquare() {

}

void runRectangle() {
   
}

void runTriangle() {
   
}

void runCircle() {
   
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