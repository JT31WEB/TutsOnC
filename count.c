#include <stdio.h>

int main() {
int n = -1, num, sum = 0;		//-1 because of 0 that must be entered to end loop

while (num != 0) {
	printf("enter integer to be added(enter 0 to end input): ");
	scanf("%d", &num);
	sum += num;		//sum = sum + num
	n++;		//n = n + 1
	}

if (n == 0) printf("no numbers were entered");

else	{printf("the sum of your %d numbers is %d\n", n, sum);
		printf("and their average is %1.2f", (float) sum/n);
		}
}
