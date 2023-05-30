//C Program to Check Whether a Number is Even or Odd

#include <stdio.h>
#include <conio.h>

int main(){

int num;

printf("Enter number to check : ");
scanf("%d",&num);

if((num%2)==0){
printf("Number is even !! : %d",num);
}
else {
	printf("Number is odd !! : %d",num);
}


}
