#include<stdio.h>
int main()
{
	char a[100],s[100],p;
	int n,i,j;
	printf("enter the element of an string\n");
	for(i=0;i<100;i++)
	{
		scanf("%c",&a[i]);
		if(a[i]=='\n')
		{
			break;
		}		
	}
	a[i]='\0';
	printf("enter the elements of sub-string\n");
	for(i=0;i<100;i++)
	{
		scanf("%c",&s[i]);
		if(s[i]=='\n')
		{
			break;
		}		
	}
	s[i]='\0';
	printf("enter the position\n");
	scanf("%d",&n);
	for(i=0;a[i]!='\0';i++)
	{
		if(i==n-1)
		{
			for(j=0;s[j]!='\0';j++)	
			{
				a[i++]=s[j];
			}
		}
	}
	puts(a);		
	return 0;
}	














