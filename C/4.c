#include <stdio.h>

int palindrome(){
	int i = 0, j = 0, sum = 0, firstH = 0, secondA = 0, final = 0, secondB = 0, secondC = 0, secondH = 0, secondF = 0, temp = 0;
	for(i=1;i<1000;i++)
		for(j=1;j<1000;j++){
			//printf("lol");
			sum = i*j;
			firstH = sum/1000;
			secondH = sum - (firstH*1000);
			secondA = secondH/100;
			secondB = (secondH - (secondA*100))/10;
			secondC = secondH - ((secondA*100)+(secondB*10));
			secondF = ((secondC*100) + (secondB*10) + secondA);
			if(firstH == secondF)
				if (temp < firstH){
					temp = firstH;
					final = (firstH*1000) + secondH;
				}
		}
	return final;
}

void main(){
	int final = 0;
	printf("The largest palindrome made from the product of two 3-digit numbers is:");
	final = palindrome();
	printf("%d", final);
}