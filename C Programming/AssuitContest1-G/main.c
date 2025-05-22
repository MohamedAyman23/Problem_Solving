#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long long n = 0, m = 0, k = 0, result = 0;
    scanf("%lld%lld%lld", &n, &m, &k);

    if(n == 0 || k == 0)// 640888406240047987 374226571365332132 461101106400641213 answer 461101106400641213
    {
        result = 0;
                        // 266,661,834,874,715,855
    }
    else{
        if((m < n) && (m < k))// 90 24 89 ********* 24 + ((90 -24)/2) = 24 + 33 = 57;
        {
            if((n / 2) >= k)
            {
                result = k;
            }
            else{
                n -= m;
                if(n / 2 >= (k - m))
                {
                    result = ((m) + (k - m));
                }
                else{
                    result = ((m) + (n / 2));
                }

            }
        }
        else if((k < n) && (k < m))
        {

            result = (k);
        }
        else if((n < m) && (n < k))
        {
            result = (n);
        }
    }
    printf("%lld\n", result);
    return 0;
}
