#include <stdio.h>

int main()
{
    int X, N, T, i, j;
    scanf("%d", &X);
    int W[X];

    for( i=1; i<=X; i++ )
    {
        W[i] = 1;
        scanf("%d %d", &N, &T);
        for(j=N; j>N-T; j--)
            W[i]*=j;
    }
    for( i=1; i<=X; i++ )
    {
        printf("Case %d: %d\n", i+1, W[i]);
    }
    return 0;
}
