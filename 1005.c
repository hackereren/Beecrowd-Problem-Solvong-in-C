#include<stdio.h>

int main()
{
    double a,b,c,d,MEDIA;
    a=3.5;
    b=7.5;
    scanf("%lf %lf",&c,&d);

    MEDIA=(a*c+b*d)/(a+b);

    printf("MEDIA = %.5lf\n",MEDIA);
    return 0;
}
