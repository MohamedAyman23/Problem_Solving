// First Solution..............
/*#include <stdio.h>

int main()
{
    long long d;
    long long a, b ,c;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);//34688642 -851839419 395784949 490743112


    if(((a) + (b) - (c)) == d)
        printf("YES\n");
    else if(((a) + (b) * (c)) == d)
        printf("YES\n");
    else if(((a) - (b) + (c)) == d)
        printf("YES\n");
    else if(((a) - (b) * (c)) == d)
        printf("YES\n");
    else if(((a) * (b) + (c)) == d)
        printf("YES\n");
    else if(((a) * (b) - (c)) == d)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
*/
// Second Solution.........
#include <stdio.h>

int main() {
    long long a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    // Try all possible combinations of operators
    if ((a + b - c == d) || (a + b * c == d) ||
        (a - b + c == d) || (a - b * c == d) ||
        (a * b + c == d) || (a * b - c == d)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
