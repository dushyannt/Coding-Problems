#include<stdio.h>
int sum(int n);
int main()
{
    int n;
    printf("enter 3 digits num:  ");
    scanf("%d",&n);
    sum(n);
    printf("%d",sum2);

}
int sum(int n)
{
    int sum2;
    int thou=n/100;
    int thous=n%100;
    int hund=thous/10;
    int oneth=thous%10;
    sum2=thou+hund+oneth;
    return sum ;

}