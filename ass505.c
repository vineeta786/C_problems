#include<stdio.h>
main()
{
	char ch,*p;
	printf("Enter the alphabet to checked\n");
	scanf("%c",&ch);
	p=&ch;
	switch(*p)
	{
		case 'a||A':
			printf("Vowel!!\n");
		case 'e||E':
			printf("Vowel!!\n");
	    case 'i||I':
			printf("Vowel!!\n");
		case 'o||O':
			printf("Vowel!!\n");
		case 'u||U':
			printf("Vowel!!\n");
		default:
			printf("Consonant!!\n");
		}
	}
