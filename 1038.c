#include<stdio.h>

int main()
{
    int X,Y;
    float a,b,c,d,e;
    scanf("%d%d",&X,&Y);
    if(X==1){
    a=Y*4.00;
    printf("Total: R$ %.2f\n",a);
    }
    if(X==2){
    b=Y*4.50;
    printf("Total: R$ %.2f\n",b);
    }
    if(X==3){
    c=Y*5.00;
    printf("Total: R$ %.2f\n",c);
    }
    if(X==4){
    d=Y*2.00;
    printf("Total: R$ %.2f\n",d);
    }
    if(X==5){
    e=Y*1.50;
    printf("Total: R$ %.2f\n",e);
    }
    return 0;
}
