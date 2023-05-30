//swap two numbers

#include <stdio.h>
#include <conio.h>

int main(){

int a=5,b=2;
printf("ORIGINAL NUMBERS ARE : a= %d  |  b= %d\n",a,b);
b=b+a;
a=b-a;
b=b-a;

printf("SWAPED NUMBERS ARE   : a= %d  |  b= %d",a,b);

	
}

