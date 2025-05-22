#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N =0, Buffer =0, New_Val =0;
    scanf("%d", &N);
    Buffer = N;//12121
    while(Buffer)
    {
        New_Val =(New_Val * 10) + (Buffer % 10);
        //printf("%i\n", New_Val);
        Buffer /= 10;
    }
    printf("%d\n", New_Val);
    if(N == New_Val)
    {
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
