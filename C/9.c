#include <stdio.h>
#include <math.h>

double pythagTrip(double number){
	double a = 0, b = 0, c = 0, a1 = 0, a2 = 0, a3 = 0, temp = 0, temp2 = 0, result = 0, temp3 = 0;
	for(c=3;c<number;c++)
		for(b=2;b<number;b++){
			if(b>c)
				b = number;
			for(a=1;a<number;a++){
				if(a>b)
					a = number;
				a1 = pow(a,2);
				a2 = pow(b,2);
				a3 = pow(c,2);
				temp = a1 + a2;
				temp2 = (a+b+c);
				temp3 = (a*b*c);
				if((temp == a3) && (temp2 == number))
					result = temp3; 
			}
		}
	return result;
}	

void main(){
	double number = 0, result = 0;
	printf("Please enter a number to find the pythagorean triplet then the product of the triplets:");
	scanf("%lf",&number);
	result = pythagTrip(number);
	if(result == 0)
		printf("No triplet found");
	else
		printf("The product of the triplets for %lf is:%lf", number, result); 
}