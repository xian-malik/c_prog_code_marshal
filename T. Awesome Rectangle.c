#include <stdio.h>

int main()
{
    int T, i, j;
    scanf("%d", &T);
    int N[T];
    for(i=0; i<T; i++)
        scanf("%d", &N[i]);
    for(i=0; i<T; i++)
    {
        for(j=0; j<N[i]; j++)
            printf("********* ");
        printf("\n");
        for(j=0; j<N[i]; j++)
            printf("*       * ");
        printf("\n");
        for(j=0; j<N[i]; j++)
            printf("*       * ");
        printf("\n");
        for(j=0; j<N[i]; j++)
            printf("********* ");
        printf("\n");
    }
    return 0;
}
