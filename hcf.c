#include <stdio.h>
int main() {
int m, n, r;
printf("Enter two numbers: ");
scanf("%d %d", &m, &n);
while (n != 0) {
r = m % n;
m = n;
n = r;
}
printf("\nTheir HCF is %d\n", m);
}
