#include <stdio.h>
#include <math.h>

double divisbleN[10];

void divisable(){
	double a = 0, b = 1, c = 0;
	int d = 1;
	for(a = 20;a < 1000000000;a++){
		while(b <= 20 ){
			if(fmod(a,b) == 0){
				//printf("lol");
				c++;
				//printf("%lf-",c);
				if(c == 19){
					divisbleN[d] = a;
					d++;				
				}
			}
			else
				b = 20;
			b++;	
		}
		c = 0;
		b = 1;
	}
}

double smallDiv(){
	double temp = 100000000000000, final = 100000000000000;
	int a = 0;
	for(a=1;a<=10;a++){
		//printf("%d-",divisbleN[a]);
		temp = divisbleN[a];
		if((temp < final) && (temp != 0))
			final = temp;
	}
	return final;
}

void main(){
	double final = 0;
	printf("the smallest positive number that is evenly divisible by all of the numbers from 1 to 20 is:");
	divisable();
	final = smallDiv();
	printf("%lf",final);
}