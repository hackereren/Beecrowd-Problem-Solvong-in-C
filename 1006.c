#include<stdio.h>

int main()
{
    float A,B,C,x,y,z,MEDIA;
    A=2;
    B=3;
    C=5;
    scanf("%f %f %f",&x,&y,&z);

    MEDIA=(A*x+B*y+C*z)/(A+B+C);

    printf("MEDIA = %.1f\n",MEDIA);
    return 0;
}
