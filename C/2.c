#include <stdio.h>

int add(){
	int a = 1, b = 2, c = 2, total = 0;
	while (c <= 4000000){
		if ((c % 2) == 0)
			total = total + c;
		c = a + b;
		a = b;
		b = c;
	}
	return total;
}

void main(){
	int total = 0;
	printf("the sum of all the even terms of the fibonacci sequence are:");
	total = add();
	printf("%d",total);
}