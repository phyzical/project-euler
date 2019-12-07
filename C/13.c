#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <dos.h>

FILE *txt;
double allDigits[21];

void getDigits(char fileName[10]){
	double end = 1, sum = 0;
	int a = 0;
	txt = fopen(("%s",fileName),"r");
	while(end != EOF){
		end  = fgetc(txt);
		//printf("%lf-",(end-48));
		if(end == 10){
			allDigits[a] = sum;
			a++;
			printf("%lf-",sum);
			sum = 0;
		}
		else{
			end = end - 48;
			sum = (sum*10) + end;
		}
	}
	sum = ((sum- (end-48))/10);
	allDigits[a] = sum;
	//printf("%lf-",sum);
	fclose(txt);
}

double sumNumber(){
	int a = 0;
	double result = 0;
	for (a=0;a<=sizeof(allDigits);a++){
		//printf("%lf-",allDigits[a]);
		result = result + allDigits[a];
	}
	return result;
}

double findDigits(double digit, double num){
	double j = 0, a = 0, result = 0, limit = 1;
	result = digit;
	for(j=1;j<=num;j++)
		limit = limit*10;
	limit--;
	for(a=0;a<100;a++){
		result = result/10;
		if(result<= limit){
			a = 100;
		}
	}
	return result;
}

void main(){
	double digit = 0, result = 0, num = 0;
	char fileName[10];
	int a = 0, b= 0;
	printf("Please enter the first amount of consecutive digits you would like to know of the sum:");
	scanf("%lf", &num);
	printf("\nPlease enter the name of the text file containing the numbers including extension:");
	scanf("%s",&fileName);
	getDigits(fileName);
	digit = sumNumber();
	result = findDigits(digit, num);
	printf("\nThe first %lf consecutive digits in the sum of all numbers in the text file %s is:%lf", num, fileName, result);
}