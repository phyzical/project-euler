#include <stdio.h>
#include <math.h>

double findPrime(double number){
	double a = 0, b = 0, c = 0, n = 10000000, d = 0, result = 0, temp = 0;
	int percent = 0;

	for(a = 2;a<=n;a++){
		temp = ((a/n)*100);
		//printf("%d-",(int)temp);
		if((int)temp > percent){
			percent = (int)temp;
			printf("Percentage :%d\n",percent);
		}
		c = 0;
		for(b = 2;b<=n;b++){
			if(fmod(a,b)==0)
				c++;
			if(a<b)
				b = n+1;
		}
		if(c==1){
			d++;
			if(d==number){
				result = a;
				a = n+1;
			}
		}
	}
	return result;
}

void main(){
	double number = 0, result = 0;
	printf("Please enter an nth prime number to find:");
	scanf("%lf",&number);
	result = findPrime(number);
	printf("the %lfth prime number is:%lf",number, result);	
}