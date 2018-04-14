#include <stdio.h>
#include <math.h>

int main()
{
    int T, i, r, x, y, x1, y1;
    scanf("%d", &T);
    int a[T];
    for(i=0; i<T; i++)
    {
        scanf("%d %d %d %d %d", &r, &x, &y, &x1, &y1);
        if( r <= sqrt( (x1-x)*(x1-x) + (y1-y)*(y1-y) ) )
            a[i] = 0;
        else
            a[i] = 1;
    }
    for(i=0; i<T; i++)
    {
        if( a[i] == 0 )
           printf("Case %d: NO\n", i+1);
        else
           printf("Case %d: YES\n", i+1);
    }
    return 0;
}
