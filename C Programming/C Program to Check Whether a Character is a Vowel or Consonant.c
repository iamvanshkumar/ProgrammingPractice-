//C Program to Check Whether a Character is a Vowel or Consonant
#include <stdio.h>
#include <conio.h>

int main(){
	
	char c;
	
	printf("Enter Character to check : ");
	scanf("%c",&c);

	if((c=='a'||c=='e'||c=='i'||c=='o'||c=='u')||
	(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'))
	{
		
		printf("Vowel");
	}
	else{
		printf("Consonant");
	}

}
