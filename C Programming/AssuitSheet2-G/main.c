#include <stdio.h>

long long factorial(int n);
// factorial of numbers of test cases user enter the num of test cases then each num of them to be calculated.
int main() {
    int numTestCases;
    scanf("%d", &numTestCases);

    for (int i = 1; i <= numTestCases; i++) {
        int n;
        scanf("%d", &n);

        long long fact = factorial(n);
        printf("%llu\n", fact);
    }

    return 0;
}

long long factorial(int n) {
    unsigned long long fact = 1;

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    return fact;
}
