#include<stdio.h>

int main()
{
    char name[10];
    double a,b,total;
    scanf("%s",&name);
    scanf("%lf",&a);
    scanf("%lf",&b);

    total=a+(b*15/100);

    printf("TOTAL = R$ %.2lf\n",total);
    return 0;
}
