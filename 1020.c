#include<stdio.h>

int main()
{
    int N,a,b,c,d,e;
    scanf("%d",&N);

    if(N>=365){
    a=N/365;
    printf("%d ano(s)\n",a);
    }

    else{
    printf("0 ano(s)\n");
    }
    b=N%365;

    if(b>=30){
    c=b/30;
    printf("%d mes(es)\n",c);
    }

    else{
    printf("0 mes(es)\n");
    }
    d=b%30;

    if(d<30 ){
    printf("%d dia(s)\n",d);
    }
    else{
    printf("0 dia(s)\n");
    }


    return 0;
}
