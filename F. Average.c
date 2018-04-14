#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    float avg;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    avg = (a+b+c+d+e);
    printf("%.2f", avg/5);
    return 0;
}
