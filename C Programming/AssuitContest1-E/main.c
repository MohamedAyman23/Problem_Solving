#include <stdio.h>

int main() {
  int a = 0, b = 0;

  // Get the input from the user.
    scanf("%d%d", &a, &b);
    if((a | b) == 0)
    {
        printf("NO\n");
    }
    else{
        if((a == (b - 1)) || (b == (a - 1)) || (a == b))
            printf("YES\n");
        else
        {
            printf("NO\n");
        }
    }

  return 0;
}
