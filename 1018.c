#include<stdio.h>

int main()
{
    int N,x;
    scanf("%d",&N);
    if(N>0 && N<1000000){

    printf("%d\n",N);

    if(N>=100) {

        x=N/100;

        printf("%d nota(s) de R$ 100,00\n",x);

    }
    else {
        printf("0 nota(s) de R$ 100,00\n");
    }
    N=N%100;

    if(N>=50 && N<100) {

        x=N/50;
        printf("%d nota(s) de R$ 50,00\n",x);

    }
    else {
        printf("0 nota(s) de R$ 50,00\n");
    }

    N=N%50;

    if(N>=20 && N<50) {

        x=N/20;
        printf("%d nota(s) de R$ 20,00\n",x);


    }
    else {
        printf("0 nota(s) de R$ 20,00\n");
    }

    N=N%20;

    if(N>=10 && N<20) {
        x=N/10;
        printf("%d nota(s) de R$ 10,00\n",x);

    }
    else {
        printf("0 nota(s) de R$ 10,00\n");
    }

    N=N%10;
    if(N>=5 && N<10) {
        x=N/5;
        printf("%d nota(s) de R$ 5,00\n",x);
    }
    else {
        printf("0 nota(s) de R$ 5,00\n");
    }

    N=N%5;
    if(N>=2 && N<5) {
        x=N/2;
        printf("%d nota(s) de R$ 2,00\n",x);
    }
    else {
        printf("0 nota(s) de R$ 2,00\n");
    }
    N=N%2;
    if(N>=1 && N<2) {
        x=N/1;
        printf("%d nota(s) de R$ 1,00\n",x);
    }
    else {
        printf("0 nota(s) de R$ 1,00\n");
    }
    }
    return 0;

}
