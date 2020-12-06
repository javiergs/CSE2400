#include <stdio.h>
#include <math.h>

int foo = 0;
// this is a one line comment
int myFunction(){
	return 5;
}

int main(){
	printf("Hello World");
	printf("\n");
	int x = myFunction();
	foo = x + 1;
	printf("Result   : %f", sqrt(2));
	return 0;
}