#include <stdio.h>
#include <stdlib.h>
void del(int *p, int);
int main()
{
    int *p, i, n, r;
    p = (int *)malloc(n * sizeof(int));
    printf("enter the size of the array\n");           
    scanf("%d", &n);
    del(p, n);
    return 0;
}

void del(int *p, int n)
{
    int i, j;
    printf("enter the elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", p + i);
    }
    for(i=1;i<n;i++)
    {
        

        *(p+i)=*(p+i*2);
        
    }
    n=n-(n/2);
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(p+i));
    }
}
