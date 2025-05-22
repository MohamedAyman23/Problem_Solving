#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i = 0,j =0;
    int sum = 0;
    int *arr = NULL;
    printf("Enter the number of elements :");
    scanf("%i", &n);
    arr = (int *)calloc(n ,sizeof(int));
    for(i = 0; i < n; i++)
    {
        scanf("%i", &arr[i]);
    }
    for(j =0; j < n; j++)
    {
        sum += arr[j];
    }

    printf("%i\n", sum);
    free(arr);
    arr = NULL;
    return 0;
}
