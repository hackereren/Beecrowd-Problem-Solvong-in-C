#include<stdio.h>

int main()
{
    int code,code2,quantity,quantity2;
    float price,price2,calculation,calculation2;
    float value;
    scanf("%d",&code);

    scanf("%d",&quantity);

    scanf("%f",&price);

    scanf("%d",&code2);

    scanf("%d",&quantity2);

    scanf("%f",&price2);

    calculation=quantity*price;

    calculation2=quantity2*price2;

    value=calculation+calculation2;

    printf("VALOR A PAGAR: R$ %.2f\n",value);
    return 0;
}
