#include<stdio.h>
 float sq(int n);
int main()
{
 int n;
 printf("enter number:  ");
 scanf("%d",&n);
 sq(n);



}
float sq(int n)
{
float sqroot= sqrt(n);
 printf("%f",sqroot);
}