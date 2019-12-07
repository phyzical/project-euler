#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <dos.h>

FILE *txt;
double allDigits[21][21];
double sumOfDigits[10000];

void getDigits(char fileName[10]){
	double end = 1, end2 = 1, result = 0;
	int a = 0, b = 0;
	txt = fopen(("%s",fileName),"r");
	while(end != EOF && end2 != EOF){   //will only work for sets of 2 numbers seperated by a space
		end  = fgetc(txt);
		//printf("%lf-",end);
		if (end == 10){
			b++;
			a = 0;
		}
		else{
			if(end >= 48 && end <= 57){
				end2 = fgetc(txt);				
				if(end2 >= 48 && end2 <= 57){
					end = end-48;
					end2 = end2-48;
					result = end*10 + end2;
					//printf("%d-",b);
					//printf("%d-",a);
					allDigits[b][a] = result;
					//printf("%lf-",result);
					a++;
				}
			}
		}
	}
	fclose(txt);
}

void sumDigits(double digits){
	double a = 1, b = 1, sum = 1;
	int c = 0, d = 0, e = 0, temp = 0;
	//printf("made it here");
	for(e=0;e<=21;e++){
		for(a=digits;a<=21;a++){  //horizontal working
			b = 1;					
			sum = 1;
			while(b<=digits){
				c = a-b;
				sum = sum * allDigits[e][c];
				//printf("the matrix: %d-%d- and the number: %lf\n",e,c,allDigits[e][c]);
				b++;	
			}
		sumOfDigits[d] = sum;
		d++;
		}
	}
	
	for(e=0;e<=21;e++){
		for(a=digits;a<=21;a++){  //vertical working
			b = 1;
			sum = 1;
			while(b<=digits){
				c = (int)(a-b);
				sum = sum * allDigits[c][e];
				//printf("the matrix: %d-%d- and the number: %lf\n",c,e,allDigits[c][e]);
				b++;
			}
		sumOfDigits[d] = sum;
		d++;
		}
	}
	                 
	for(e=0;e<=21;e++){
		for(a=0;a<=21;a++){  /*   diagonal \ working */
			b = 1;
			sum = 1;
			c = (int)a;
			temp = (int)e;
			while(b<=digits){
				//printf("%lf-",c);
				sum = sum * allDigits[temp][c];
				//printf("the matrix: %d-%d- and the number: %lf\n",temp,c,allDigits[temp][c]);
				b++;
				c++;
				temp++;
			}
		sumOfDigits[d] = sum;
		d++;
		}
	}

	for(e=0;e<=21;e++){
		for(a=digits;a<=21;a++){  /* diagonal / working*/
			b = 1;
			sum = 1;
			c = (int)a;
			temp = (int)e;
			while(b<=digits){
				//printf("%lf-",c);
				sum = sum * allDigits[temp][c];
				//printf("the matrix: %d-%d- and the number: %lf\n",temp,c,allDigits[temp][c]);
				b++;
				c--;
				temp++;
			}
		sumOfDigits[d] = sum;
		d++;
		}
	}
}

double largeSum(){
	double a = 0, temp = 0, result = 0;
	int b = 0;
	
	for(a;a<=10000;a++){
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
	int a = 0, b= 0;
	printf("Please enter the amount of consecutive digits you would like to sum:");
	scanf("%lf", &digits);
	printf("\nPlease enter the name of the text file containing the numbers including extension:");
	scanf("%s",&fileName);
	getDigits(fileName);
	sumDigits(digits);
	result = largeSum();
	printf("\nThe greatest product of %lf consecutive digits in the text file %s is:%lf", digits, fileName, result);
}