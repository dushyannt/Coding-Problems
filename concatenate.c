#include<stdio.h>

int main()
{
    char a[100],b[45];
    int n,i,j,l;
    printf("Enter the elements of the 1st string\n");
    for(i=0; i<100; i++)
    {
        scanf("%c",&a[i]);
        if(a[i]=='\n')
        {
            break;
        }
    }
    a[i]='\0';
    printf("Enter the elements of 2nd string\n");
    for(j=0; j<100; j++)
    {
        scanf("%c",&b[j]);
        if(b[j]=='\n')
        {
            break;
        }
    }
    b[j]='\0';
    for(l=0; a[l]!='\0'; l++);
    i=0;
    while(b[i]!='\0')
    {
        a[l]=b[i];
        l++;
        i++;
    }
    a[l]='\0';
    printf("The concatenated string:\n");
    for(j=0; a[j]!='\0'; j++)
    {
        printf("%c",a[j]);

    }
    return 0;
}