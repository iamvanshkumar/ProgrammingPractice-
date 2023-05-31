//C Program to Check Whether a Number is Positive or Negative

#include <stdio.h>
#include <conio.h>

int main(){
	float num;
	printf("Enter Number : ");
	scanf("%f",&num);
	
	if(num<=0.0){
		if(num==0.0){
			printf("You Entered Zero !");
		}
		else{
			printf("Negative Number");
		}
	}
	else{
		printf("Positive Number");
		}
}
