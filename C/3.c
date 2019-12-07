#include <stdio.h>
#include <math.h>

double primeNumbers[1000];

void primeNumber(double number, double n){
	double a = 2.0;
	int b = 1, z = 0;
	for(a;a<=n;a++)
		if(fmod(number,a) == 0.0){
			primeNumbers[b] = a;
			b++;
			//printf("%lf-",number);
			if(number == a){
				//printf("%lf-",a);
				a = (n+1.0);
				z = 1;
			}
			else{
				number = number/a;
				a = 2.0;
			}
		}
}

double getLarge(double number){
	double largePrime = 0, total = 1, b = 0, c = 0;
	int a = 1;
	for(a;a<=1000;a++){
		b = primeNumbers[a];
		//printf("%d-",b);
		if (b != 0)
			total = total * b;
		if(b > largePrime)
			largePrime = b;
	}
	//printf("%d",total);
	if (total == number)
		return largePrime;
}

void main(){
	double largePrime = 0;
	double number = 0.0, n = 100000.0;
	printf("Please enter a number to determine the largest prime factor of the said number:");
	scanf("%lf",&number);
	//printf("%lf",number);
	primeNumber(number, n);
	largePrime = getLarge(number);
	printf("the Largest prime number of %lf is: %lf", number, largePrime);
}