#include <stdio.h>
int main()
{
    int q1,q2,q3;
    float c1,c2,c3,bill,discount,final;
    printf("Enter the quantity of three products");
    scanf("%d%d%d",&q1,&q2,&q3);
    printf("Enter the cost of three products");
    scanf("%f%f%f",&c1,&c2,&c3);
    bill = (c1*q1 + c2*q2 + c3*q3);
    discount = (bill*50)/100;
    final = bill-discount;
    printf("Your final bill is %f",final);
    return 0;
}