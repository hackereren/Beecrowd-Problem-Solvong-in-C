#include<stdio.h>

int main()
{
    double R, PI=3.14159, value;

    scanf("%lf",&R);

    value=PI*4/3*R*R*R;


    printf("VOLUME = %.3lf\n",value);
    return 0;
}
