#include<stdio.h>
void reverse(int [],int);
int main()
{
    int i,n;
    
    scanf("%d",&n);
     int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    reverse(a, n);
    return 0;
}
void reverse(int a[],int n)
{
    int i,temp,j;
    for(i=0,j=n-1;i<j;i++,j--)
    {
        temp=a[i];
        a[i]=a[n-1];
        a[n-1]=temp;
        
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
        
    }


}