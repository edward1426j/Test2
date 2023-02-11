#include<stdio.h>

int main()
{
    int n;
    float p,r,i;
    printf("\n Enter Amount=");
    scanf("%f",&p);
    printf("No.of years=");
    scanf("%d",&n);
    printf("\n Enter rate=");
    scanf("%f",&r);
    i=p*r*n/100;
    printf("\n interest=%f",i);
    return 0;
}