#include <stdlib.h>
#include <stdio.h>
#include <getopt.h>

int main(int argc, char **argv) {
	int option;

	while ((option = getopt(argc, argv, ":a:b::cnd")) != -1) {
		switch (option) {
			case 'a':
			      printf("a: %s\n", optarg);
				   break;
			case 'b':
			      printf("b: %s\n", optarg);
				   break;
         case 'c':
			      printf("c: %s\n", optarg);
				   break;
         case 'd':
			      printf("d: %s\n", optarg);
				   break;
         case ':':
			      printf("%c needs a value\n", option);
				   break;
         case '?':
               printf("unknown option^ %c\n", optopt);
				   break;
		} 
	}
	
	return 0;
}
