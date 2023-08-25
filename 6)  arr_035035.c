#include<stdio.h>
int main()
{
int a[20],n,i,sum1=0,sum2=0;
printf("input n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]<0)
{
sum1=sum1+a[i];
}
else if(a[i]>0)
{
sum2=sum2+a[i];
}
}
printf("sum of possitive no %d\n",sum1);
printf("sum of negetive no is %d\n",sum2);
return 0;
}

