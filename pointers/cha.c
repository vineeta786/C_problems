#include<stdio.h>
int main()
{
	char ch,*c,i=0,j=0;
	c=&ch;
	printf("Enter the characters");
	while(*c!='*')
	{
		scanf("%c",c);
		if(*c<=65||*c>=97)
		{
		printf("%c\n",*c-32);
		i++;	
		}	
		else
		{
			printf("%c\n",*c+32);
			j++;
		}
		
	}
}
