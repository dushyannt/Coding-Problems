#include<stdio.h>

int main()
{
    char a[100][100];
    int i,j;
    printf("Enter the Paragraph\n");
    for(i=0; i<3; i++)
    {   for(j=0; j<100; j++)
        {   scanf("%c",&a[i][j]);
            {
                if(a[i][j]=='\n')
                {
                    break;
                }
            }

        }

    }
   printf("\n") ;
   printf("The entered paragraph\n"); 
    for(i=0; i<3; i++)
    {   for(j=0; j<100; j++)
        {   printf("%c",a[i][j]);
            {
                if(a[i][j]=='\n')
                {
                    break;
                }
            }

        }


    }




    return 0;
}