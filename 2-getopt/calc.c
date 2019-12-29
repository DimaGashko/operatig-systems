#include <stdlib.h>
#include <stdio.h>
#include <getopt.h>
#include <string.h>

void help() {
   printf("*** calc v0.1 ***\n");
   printf("Usage: calc --operator add -a 5 -b 10\n");
   printf("   or: calc -o add -a 5 -b 10\n");
   printf("   or: calc -o '+' -a 5 -b 10\n");
   printf("\n");
   printf("Available operators: add(+), sub(-), mul(*), div(/)");
}

int main(int argc, char **argv) {
   int opt = 0;
   int optIndex = 0;

   int opUsedFlag;
   char *op;
   float a;
   float b;
   
   struct option options[] = {
      { "help", no_argument, &opUsedFlag, 'h' },
      { "operator", required_argument, 0, 'o' },
   };

   while ((opt = getopt_long(argc, argv, "o:a:b:", options, &optIndex)) != -1) {
		switch (opt) {
			case 0:
            if (options[optIndex].name == "help") {
               help();
            }
            else if (options[optIndex].name == "operator") {
               op = optarg;
            }

            break;
			case 'h':
            help();
            break;
         case 'o':
            op = optarg;
            break;
         case 'a':
            a = atof(optarg);
            break;
         case 'b':
            b = atof(optarg);
         case '?':
            "Run calc --help or './calc -h' to help";
            break;
		} 
	}

   // if (!opUsedFlag) {
   //    return 0;
   // }

   if (strcmp(op, "add") == 0 || strcmp(op, "+") == 0) {
      printf("%.2f + %.2f = %.2f\n", a, b, a + b);
   }
   else if (strcmp(op, "sub") == 0 || strcmp(op, "-") == 0) {
      printf("%.2f - %.2f = %.2f\n", a, b, a - b);
   }
   else if (strcmp(op, "mul") == 0 || strcmp(op, "*") == 0) {
      printf("%.2f * %.2f = %.2f\n", a, b, a * b);
   }
   else if (strcmp(op, "div") == 0 || strcmp(op, "/") == 0) {
      if (b == 0) {
         printf("Zero division\n");
      } 
      else {
         printf("%.2f / %.2f = %.2f\n", a, b, a / b);
      }
   } else {
      printf("Unknown operator %s\n", op);
   }

   return 0;
}
