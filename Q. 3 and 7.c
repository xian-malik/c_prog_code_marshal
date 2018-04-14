#include <stdio.h>

int main()
{
    int T, i;
    scanf("%d", &T);
    int N[T];
    for( i=0; i<T; i++ )
        scanf("%d", &N[i]);
    for( i=0; i<T; i++ )
    {
        if(N[i]%3==0)
        {
            printf("%d is divisible by 3\n", N[i]);
            if(N[i]%7==0)
                printf("%d is also divisible by 7\n", N[i]);
        }
        else
            printf("%d is not divisible by 3\n", N[i]);
    }
    return 0;
}
