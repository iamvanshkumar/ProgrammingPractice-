//check leap year 

#include <stdio.h>
#include <conio.h>

int main(){
	int year;
	printf("Enter Year : ");
	scanf("%d",&year);
	
	if(year%400==0 || year%4 ==0){
		printf("Leap Year");
	}
	else if (year%100==0){
		printf("Not a Leap Year");
	}
	else{
		printf("Not a Leap Year");
	}
}
