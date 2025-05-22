#include <stdio.h>
int main()
{
    unsigned int N, Days, Years, Months;
    scanf("%u", &N);
    Years = (N / 365);
    Months = ((N % 365)  / 30);
    Days = ((N % 365) % 30);
    printf("%u years\n%u months\n%u days\n", Years, Months, Days);
    return 0;
}
