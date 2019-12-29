#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

void run();
void help();

double square(double a);
double rectangle(double a, double b);
double triangle(double a, double b, double c);
double circle(double r);

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

      if (strcasecmp(cmd, "square") == 0 || strcasecmp(cmd, "s") == 0) {
         runSquare();
      }
      else if (strcasecmp(cmd, "rectangle") == 0 || strcasecmp(cmd, "r") == 0) {
         runRectangle();
      }
      else if (strcasecmp(cmd, "triangle") == 0 || strcasecmp(cmd, "t") == 0) {
         runTriangle();
      }
      else if (strcasecmp(cmd, "circle") == 0 || strcasecmp(cmd, "c") == 0) {
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
   float a;

   printf("Enter variables: a\n");
   printf("a = ");
   scanf("%f", &a);

   if (a < 0) {
      printf("Invalid data\n");
      return;
   }

   printf("S = %.2f\n", (float)square(a));
}

void runRectangle() {
   float a, b;

   printf("Enter variables: a, b\n");

   printf("a = ");
   scanf("%f", &a);

   printf("b = ");
   scanf("%f", &b);

   if (a < 0 || b < 0) {
      printf("Invalid data\n");
      return;
   }

   printf("S = %.2f\n", (float)rectangle(a, b));
}

void runTriangle() {
   float a, b, c;
   
   printf("Enter variables: a, b, c\n");
   
   printf("a = ");
   scanf("%f", &a);
   
   printf("b = ");
   scanf("%f", &b);

   printf("c = ");
   scanf("%f", &c);

   if (a < 0 || b < 0 || c < 0) {
      printf("Invalid data\n");
      return;
   }

   printf("S = %.2f\n", (float)triangle(a, b, c));
}

void runCircle() {
   float r;

   printf("Enter variables: r\n");

   printf("r = ");
   scanf("%f", &r);

   if (r < 0) {
      printf("Invalid data\n");
      return;
   }

   printf("S = %.2f\n", (float)circle(r));
}

double square(double a) {
   return a * a;
}

double rectangle(double a, double b) {
   return a * b;
}

double triangle(double a, double b, double c) {
   const double p = (a + b + c) / 2;
   return sqrt(p * (p - a) * (p - b) * (p - c));
}

double circle(double r) {
   const double PI = 3.14159265;
   return PI * r * r;
}

void help() {
   printf("Find the area of some figures \n");
   printf("> square (s)\n");
   printf("> rectangle (r)\n");
   printf("> triangle (t)\n");
   printf("> circle (c)\n");
   printf("\n");
   printf("> help \n");
   printf("> exit \n");
   printf("- - -\n\n");
}