#include<stdio.h>
int main()
{
	char a[100];
	int i,j,n=0;
	printf("Enter the element in the string\n");
	for(i=0;i<100;i++)
	{
		scanf("%c",&a[i]);
		if(a[i]=='\n')
		{
			break;
		}
	
	}
	a[i]='\0';
	
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]!=' ')
		{
			a[i]=a[i]-32;
		}
		
		printf("%c",a[i]);
	}
	return 0;
}		
		
