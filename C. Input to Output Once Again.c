#include <stdio.h>

int main()
{
    int a, b;
    double c;
    char d;
    scanf("%d %d",&a,&b);
    scanf("%lf",&c);
    scanf(" %c",&d);
    printf("\n%d %d",a,b);
    printf("\n%.2lf",c);
    printf("\n%c",d);
    return 0;
}
