#include <stdio.h>

int main()
{

    unsigned int L1, R1, L2, R2;
    scanf("%u %u %u %u", &L1, &R1, &L2, &R2);
    if(L2 > R1 || L1 > R2)
        printf("-1\n");
    else
    {
        unsigned int start = (L1 > L2) ? L1 : L2;
        unsigned int end = (R1 < R2) ? R1 : R2;
        printf("%u %u\n", start, end);
    }


    return 0;
}
