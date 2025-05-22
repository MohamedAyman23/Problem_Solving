#include <stdio.h>

int isPrime(int n);

int main() {
    int N;

    //printf("Enter the number N: ");
    scanf("%d", &N);

    //printf("Prime numbers between 1 and %d are: ", N);

    for (int i = 2; i <= N; i++) {
        if (isPrime(i))
            printf("%d ", i);
    }

    printf("\n");

    return 0;
}

int isPrime(int n) {
    if (n <= 1) {
        return 0;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}
