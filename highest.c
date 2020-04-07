#include <stdio.h>

int main() {
int num;

printf("enter number(enter 0 to stop program): ");
scanf("%d", &num);
if (num == 0) return 0;
int small = num;
while (num != 0) {
	if (small > num) small = num;
	printf("enter number(enter 0 to stop program): ");
	scanf("%d", &num);
	}
printf("the smallest number entered is: %d", small);
}
