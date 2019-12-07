#include <stdio.h>
#include <math.h>

sumOfSq(double number){
	double a = 0, total = 0;
	for(a=1;a<=number;a++)
		total = total + pow(a,2);
	return total;
}

sumOfSumSq( double number){
	double a = 0, total = 0;
	for(a=1;a<=number;a++)
		total = total + a;
	total = pow(total,2); 
	return total;
}

void main(){
	double a = 0, b = 0, result = 0, number = 0;
	printf("Please enter the amount of natural numbers you would like to go up to:");
	scanf("%lf",&number);
	a = sumOfSq(number);
	b = sumOfSumSq(number);
	//printf("%lf - %lf - ", a , b);
	result = b - a;
	printf("the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum is: %lf",result);
}