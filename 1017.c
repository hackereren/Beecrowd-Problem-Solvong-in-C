#include<stdio.h>

int main()
{
    int trp,spd;

    scanf("%d %d",&trp,&spd);

    double lit=((double)trp*(double)spd)/12;

    printf("%.3lf\n",lit);
    return 0;
}
