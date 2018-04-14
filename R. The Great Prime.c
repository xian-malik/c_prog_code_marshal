#include <stdio.h>

int main()
{
    int T, X, i, flag;
    scanf("%d", &T);
    int N[T];

    for( X=0; X<T; X++ )
        scanf("%d", &N[X]);

    for( X=0; X<T; X++ )
    {
        for( i=2, flag = 0; i<=N[X]/2; ++i )
            if(N[X]%i==0)
            {
                flag = 1;
                break;
            }
        if (flag==0)
            printf("\nCase %d: YES",X+1);
        else
            printf("\nCase %d: NO",X+1);
    }
    return 0;
}
