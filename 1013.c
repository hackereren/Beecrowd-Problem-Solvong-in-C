#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,mar,mar2;
    scanf("%d%d%d",&a,&b,&c);
    mar=(a+b+abs(a-b))/2;
    mar2=(mar+c+abs(mar-c))/2;
    printf("%d eh o maior\n",mar2);

    return 0;
}
