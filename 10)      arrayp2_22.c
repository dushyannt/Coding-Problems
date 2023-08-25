#include<stdio.h>
int main()
{  int a[50], b[30], c[5],i,j,k;
 printf("enter elements the of first array \n");
 for(i=0;i<5;i++){ scanf("%d",&a[i]);
    
 } 
 printf("enter elements the of the second array \n");
 for(j=0;j<3;j++)
 {
 scanf("%d",&b[j]);
 
 }
 printf("The merged array is\n");
 for(k=0;k<5;k++)
 {
    c[k]=a[k]+b[k];
    printf(" %d\n",c[k]);
 
 
 } return 0;
 }
