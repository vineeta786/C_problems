#include<stdio.h>
int main()
{
	char ch,*c;
	c=&ch;
	printf("Enter the character\n");
	scanf("%c",c);
	switch(*c)
	{
		case 'a':
			printf("VOWEL!!\n");
		case 'e':
			printf("VOWEL!!\n");
		case 'i':
			printf("VOWEL!!\n");
		case 'o':
			printf("VOWEL!!\n");
		case 'u':
			printf("VOWEL!!\n");
		default :
			printf("CONSONANT!!\n");			
	}
}
