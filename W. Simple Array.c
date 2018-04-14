#include <stdio.h>

int main()
{
    int T, i, j, k;
    scanf("%d", &T);
    int arr[T][100], N[T];
    for(i=0; i<T; i++)
    {
        scanf("%d", &N[i]);
        for(j=0; j<N[i]; j++)
            for(k=0; k<N[i]; k++)
                scanf(" %d", &arr[i][j*N[i]+k]);
    }
    for(i=0; i<T; i++)
    {
        printf("\n");
        for(j=N[i]*N[i]-1; j>=0; j--)
            printf("%d ", arr[i][j]);
    }
    return 0;
}
