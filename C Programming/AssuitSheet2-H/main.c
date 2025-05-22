#include <stdio.h>

int main() {
  int x;

  // Read the number X
  scanf("%d", &x);

  // Check if X is prime
  if (x <= 1) {
    printf("NO");
    return 0;
  }

  for (int i = 2; i * i <= x; i++) {
    if (x % i == 0) {
      printf("NO");
      return 0;
    }
  }

  // X is prime
  printf("YES");
  return 0;
}
