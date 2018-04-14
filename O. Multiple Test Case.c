#include <stdio.h>

int main()
{
    int A, B, T, X;
    scanf("%d", &T);
    int S[T];
    for( X=1; X<=T; X++ )
    {
        scanf("%d %d", &A, &B);
        S[X-1] = A + B;
    }
    for( X=1; X<=T; X++ )
    {
        printf("Case %d: %d\n", X, S[X-1]);
    }
    return 0;
}
