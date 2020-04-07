#include <stdio.h>
int main() {
double sum = 0.0, num;		/*using integers in case some people dont know what an integer is!!!*/

printf("\t***program to add any amount of integers***\n\n");
/*i dont see the point of adding this part first-->>>
printf("enter an integer (enter 0 to end input): ");
scanf("%d", &num);*/

while (num != 0.0){
	sum = sum + num;
	printf("enter an integer to be added (enter 0 to end input): ");
	scanf("%lf", &num);
}

printf("the total is: %f\n", sum);
}
