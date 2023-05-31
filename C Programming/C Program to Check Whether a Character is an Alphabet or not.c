//C Program to Check Whether a Character is an Alphabet or not

#include <stdio.h>
#include <conio.h>

int main (){
	char c;
	
	printf("Enter Character : ");
	scanf("%c",&c);
	
	if((c>='a'&&c<='z')|| (c>='A'&&c<='Z')){
		printf("Entered Character is an Alphabet !!");
	}
	else{
		printf("Entered Character is not an Alphabet !!");
	}
}
