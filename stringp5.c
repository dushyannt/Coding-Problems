#include<stdio.h>
int main()
{
	char a[100],p;
	int n,i;
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

	printf("enter the position\n");
	scanf("%d",&n);
	for(i=0;i<100;i++)
	{
		
		if(i == n - 1)
		{
			a[i]='@';
			break;
		}
	}
	for(i=0;a[i]!= '\0';i++)
	{
		printf("%c",a[i]);
		
	}

	return 0;
}
