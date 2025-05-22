#include <stdio.h>
#include <stdlib.h>

void isKthBitSet(int n, int k)
{
    if (n & (1 << k))
        printf("SET");
    else
        printf("NOT SET");
}

// Driver code
int main()
{
    int n = 5, k = 1;
    int bitstate = (n >> k) &1;

    // Function call
    //isKthBitSet(n, k);
    printf("bit state is = %i\n", bitstate);
   return 0;
}
