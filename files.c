#include <stdio.h>
int main() {

int n = 0, sum = 0, num, large=0, small;
/* "input" is a pointer(cos they're faster) to file we're gonna read from
*fscanf asigns value to num. this is faster than jumping
*into the loop with an uninitialised variable.
*when residing in the same folder as the program, you wont need
*"C:\\folder\\example\\etc". just the "input.txt" would work */
FILE *input = fopen("C:\\Drivers\\input.txt", "r");
FILE *output = fopen("C:\\Drivers\\output.txt", "w");
fscanf(input, "%d", &num);
//loop counts iteration,  adds num to sum then scans next number
while (num != 0) {
	n++;		//add number to n first to use as counter
	sum += num;		//add to sum
	if (num > large) large = num;	//large is set to 0 to avoid runtime errors
	if (num < small) small = num;
	fscanf(input, "%d", &num);	//scan again for next loop
	}
//if while loop did not execute beause only 0 is in file
//counter won't run therfore n will be default 0
if (n == 0) {
		printf("no numbers entered!");
		fprintf(output, "no numbers entered!");
}
//if only 1 loop of valid number runs, we cant do much with it
else {
	if (n == 1) {
			printf("\nonly 1 number supplied\n");
			fprintf(output, "\nonly 1 number supplied\n");
	}
//the block to print findings is an else
	else {
		printf("\nthe sum of the %d numbers supplied is %d\n", n, sum);
		printf("\nthe average of those numbers is %1.2f\n", (float) sum/n);
		printf("the smallest number is %d", small);
		printf(" and the biggest number is %d", large);
		fprintf(output, "\nthe sum of the %d numbers supplied is %d\n", n, sum);
		fprintf(output, "\nthe average of those numbers is %1.2f\n", (float) sum/n);
		fprintf(output, "the smallest number is %d", small);
		fprintf(output, " and the biggest number is %d", large);
		}
	}		//end of first else
//close file input
fclose(input);
fclose(output);
}
