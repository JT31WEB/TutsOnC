#include <stdio.h>

#define RESET "\x1B[0m"
#define BLK "\033[30m"
#define RED "\x1B[31m"
#define GRN "\x1B[32m"
#define YEL "\033[33m"
#define BLU "\033[34m"
#define MAG "\033[35m"
#define CYN "\033[36m"
#define WHITE "\033[37m"
#define UNKNWN1 "\033[38m"
#define UNKNWN2 "\033[39m"

int main() {
printf("this text is" RED" red\n" RESET);
printf("this text is" GRN" green\n" RESET);
printf("this text is" YEL" yellow\n" RESET);
printf("this text is" BLU" blue\n" RESET);
printf("this text is" MAG" magenta\n" RESET);
printf("this text is" CYN" cyan\n" RESET);
printf("this text is" WHITE" white\n" RESET);
printf("this text is" UNKNWN1" crazy\n" RESET);
printf("this text is" UNKNWN2" weird\n" RESET);
printf("this text is" BLK" black\n" RESET);
}
