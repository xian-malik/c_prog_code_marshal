#include <stdio.h>

int main()
{
    int N, T, X, D, i;
    scanf("%d", &T);
    int R[T];
    for( X=1; X<=T; X++ )
    {
        scanf("%d", &N);
        for(i=0, D=0; i<=N; i++)
            if(i%3==0)
                D++;
        R[X-1] = D;
    }
    for( X=1; X<=T; X++ )
        printf("Case %d: %d\n", X, R[X-1]);
    return 0;
}
