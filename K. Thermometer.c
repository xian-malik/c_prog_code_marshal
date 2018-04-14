#include <stdio.h>

int main()
{
    int C;
    double F;
    scanf("%d", &C);
    F = ( (float)C*9/5 ) + 32;
    (F < 98.4)?( printf("Not fever") ):( printf("Fever") );
    return 0;
}
