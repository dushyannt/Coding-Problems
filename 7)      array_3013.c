#include<stdio.h>
int main()
{
 int a[10],odd=0,even=0,n;
  printf("enter the elements of an array");
  for( int i=0;i<10;i++)
  {
      scanf("%d\t\n",&a[i]); 
  }
  printf("The even elements of an array are:   ");
  for(int j=0;j<10;j++)
 {
  if(a[j]%2==0)
  {
      even++ ;
  
  }
  else{odd++;}
  }
   printf("  even:%d\n odd:%d\n",even,odd);
    return 0;
    }
