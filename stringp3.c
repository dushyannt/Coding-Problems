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
	for(len=0;a[len]!='\0';len++);

	a[i]='\0';
	for(i=0,len =len-1;i<len;i++,len--)
	{
		temp= a[i];
		a[i]=a[len];
		a[len]=temp;
		}
	for(i=0;a[i]!='\0';i++)
	{
		printf("%c",a[i]);
		}
	return 0;
}
