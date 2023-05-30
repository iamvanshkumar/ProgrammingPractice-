//C Program to Find the Size of int, float, double and char

#include <stdio.h>
#include <conio.h>

int main(){
	int a=1;
	float b=1.02;
	double c=2.22;
	char d= a;
	
	printf("size of int : %zu\n",sizeof(a));
	printf("size of float : %zu\n",sizeof(b));
	printf("size of double : %zu\n",sizeof(c));
	printf("size of char : %zu",sizeof(d));
	
}
