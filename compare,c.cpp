#include<stdio.h>
int compare(char [],char[]);
int main()
{
	char a[100],b[100];
	printf("First string\n");
	gets(a);
	printf("Second string\n");
	gets(b);
	if(compare(a,b)==0)
	printf("Equal strings\n");
	else
	printf("Unequal strings\n");
	return 0;
}
int compare(char a[],char b[])
{
	int i;
	while(a[i]==b[i])
	{
		if(a[i]=='\0'||b[i]=='\0')
		break;
		i++;
	}
	if(a[i]=='\0'||b[i]=='\0')
	return 0;
	else
	return 1;
}
