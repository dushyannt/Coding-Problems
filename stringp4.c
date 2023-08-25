#include<stdio.h>
int main()
{
	char a[100],temp;
	int i,j,n=0,len;
	printf("Enter the element in the string: ");
	for(i=0;i<100;i++)
	{
		scanf("%c",&a[i]);
		if(a[i]=='\n')
		{
			break;
		}	
	}
		a[i]='\0';

