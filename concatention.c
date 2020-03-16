#include<stdio.h>
void concatenate(char[],char[]);
int main()
{
	char p[100],q[100];
	printf("Input first and second string\n");
	gets(p);
	gets(q);
	concatenate(p,q);
	printf("String obtained on concatenation is %s\n",p);
	return 0;
}
void concatenate(char p[],char q[])
{
	int i,j;
	i=0;
	while(p[i]!='\0')
	{
		i++;
	}
	j=0;
	while(q[j]!='\0')
	{
		p[i]=q[j];
		j++;
		i++;
	}
	p[i]='\0';
}
