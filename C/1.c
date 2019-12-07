#include <stdio.h>


int numbers[2000];
int common[1000];




void Divisable(int one, int two, int range){
	int a = 1,b = 1, c = 1, d = 1, e = 0, f = 0, g = 0, h = 1, i, j, k = 0, l = 0, m = 1;
	
	while( e != 1){
		if((one * a) < range){
				//printf("%d-",(one*a));
				numbers[c] = (one * a); 
				c++;
		}
		else
			e = 1;
		a++;
	}
	
	while( f != 1){
		if((two * b) < range){
			//printf("%d-",(two*b));
			numbers[c] = (two * b); 
			c++;
		}
		else
			f = 1;
		b++;
	}
	
		
	for(i=1;i<1000;i++)
		for(j=1;j<1000;j++)
			if(((one * i) == (two * j))&& (g != 1) ){
				//printf("%d",(one*i));
					g = 1;
					k = (one * i);
			}
		
	while( l != 1){
		if( (k * m) < range){
			//printf("%d-", (k*m));
			common[h] = (k*m);
			h++;
		}
		else
			l = 1;
		m++;
	}
		
		
}


int adding(){
	int total = 0,a = 1, b = 1;
	for(a; a <= 2000;a++){
		//printf("%d-",total);
		total = total + numbers[a];
		}
	for(b; b <= 1000;b++){
		//printf("%d-",total);
		total = total - common[b];
	}
	return total;
}






void main(){

	int one = 0, two = 0, range = 0;
	int total = 0;

	printf("Please enter the range 0 - ?, then enter 2 numbers to work out the sum of all the multiples of these numbers\n");
	scanf("%d %d %d", &range, &one, &two);
	Divisable(one,two,range);
	total = adding();
	printf("The total of the multiples of %d and %d between 1 and %d is: %d", one, two, range, total); 
}
