#include <stdio.h>

int main()
{
    double s, u, a, t;
    scanf("%lf %lf %lf", &u, &a, &t);
    s = u*t + .5*a*(t*t);
    printf("%.2lf", s);
    return 0;
}
