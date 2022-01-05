#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
double cube(double sum)
{
	double result = sum * sum*sum;
	printf("print out the value is:%f\n", result);
	return result;
	printf("hello world.");
}
int main()
{
	printf("%f", cube(2.0));
	return 0;
}