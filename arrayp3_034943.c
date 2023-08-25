#include<stdio.h>
int main()
{  int a[20]={1,2,3,4,5,4,3,4,5,3,7,65,6,5,4,5,6,5},n,count;
printf("enter the number to check\n");
scanf("%d",&n);
 for(int i=0;i<18;i++)
 { if(a[i]==n)
   {count++;}
 } 
 printf(" the frequency of n is %d",count);
 return 0;
 }
