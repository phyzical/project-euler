#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <dos.h>

FILE *txt;
double allDigits[2000];
double sumOfDigits[2000];

void getDigits(char fileName[10]){
	double end = 1;
	int a = 1;
	txt = fopen(("%s",fileName),"r");
	while(end != EOF){
		end  = fgetc(txt);
		//printf("%lf-",(end-48));
		allDigits[a] = (end-48);
		a++;
	}
	fclose(txt);
}

void sumDigits(double digits){
	double a = 0, b = 0, sum = 1, temp = 0;
	int c = 0, d = 0;
	//printf("made it here");
	for(a=digits;a<=1995;a++){  //might need to modify to ge trid of last 2 in array.
		while(b<digits){
			c = (int)(a-b);
			//printf("%lf-",c);
			sum = sum * allDigits[c];
			b++;
		}
	b = 0;
	d = (int)a;
	sumOfDigits[d] = sum;
	sum = 1;
	}		
}

double largeSum(){
	double a = 0, temp = 0, result = 0;
	int b = 0;
	for(a=1;a<2000;a++){
		b = (int)a;
		temp = sumOfDigits[b];
		if(temp>result)
			result = temp;
	}
	return result;
}

void main(){
	double digits = 0, result = 0;
	char fileName[10];
	printf("Please enter the amount of consecutive digits you would like to sum:");
	scanf("%lf", &digits);
	printf("\nPlease enter the name of the text file containing the numbers including extension:");
	scanf("%s",&fileName);
	getDigits(fileName);
	sumDigits(digits);
	result = largeSum();
	printf("\nThe greatest product of %lf consecutive digits in the text file %s is:%lf", digits, fileName, result);
}