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
		n++;
		
	}
	
	printf("the element in th srings: %d",n);



	return 0;
}
	
