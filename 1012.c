#include<stdio.h>

int main()
{
    double A,B,C;
    scanf("%lf",&A);
    scanf("%lf",&B);
    scanf("%lf",&C);

    double triangle,rectangle,redius,trapezium,square;
    double pi=3.14159;

    triangle=.5*A*C;
    redius=pi*C*C;
    trapezium=.5*C*(A+B);
    square=B*B;
    rectangle=A*B;

    printf("TRIANGULO: %.3lf\n",triangle);
    printf("CIRCULO: %.3lf\n",redius);
    printf("TRAPEZIO: %.3lf\n",trapezium);
    printf("QUADRADO: %.3lf\n",square);
    printf("RETANGULO: %.3lf\n",rectangle);

    return 0;
}
