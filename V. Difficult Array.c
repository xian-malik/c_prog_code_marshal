#include <stdio.h>

int main()
{
    int T, i, j;
    scanf("%d", &T);
    int arr[T][100], N[T];
    for(i=0; i<T; i++)
    {
        scanf("%d", &N[i]);
        for(j=0; j<N[i]; j++)
            scanf(" %d", &arr[i][j]);
    }
    for(i=0; i<T; i++)
    {
        printf("\n");
        for(j=N[i]-1; j>=0; j--)
            printf("%d ", arr[i][j]);
    }
    return 0;
}
