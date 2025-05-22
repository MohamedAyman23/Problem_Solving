#include <stdio.h>

int main() {
    double R;
    const double pi = 3.141592653;

    // Read input
    scanf("%lf", &R);

    // Calculate area
    double area = pi * R * R;

    // Print output
    printf("%.9f\n", area);

    return 0;
}
