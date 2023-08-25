#include<stdio.h>
void swap(int *a, int *b);
 int main()
{
    int a, b;
    printf("enter the number to swap\n");
    printf("a= ");
    scanf("%d", &a);
    printf("b= ");
    scanf("%d",&b);

    swap(&a,&b);
    printf("a=%d b=%d", a, b);
    return 0;
}
void swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}