#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N =0, i;
    int Num_arr[1000] = {};
    int Even_Flag =0, Odd_Flag =0, Pos_Flag =0, Neg_Flag =0;// 5  ---  -5 0 -3 -4 12
    scanf("%i", &N);
    for(i = 0; i < N; i++)
    {
        scanf("%i", &Num_arr[i]);
    }
    for(i = 0; i < N; i++)
    {
        if(Num_arr[i] % 2 == 0)
        {
            Even_Flag ++;
        }
        else
        {
            Odd_Flag++;
        }

        if(Num_arr[i] > 0)
        {
             Pos_Flag++;
        }
        else if(Num_arr[i] < 0)
        {
            Neg_Flag++;
        }


    }

    printf("Even: %i\n", Even_Flag);
    printf("Odd: %i\n", Odd_Flag);
    printf("Positive: %i\n", Pos_Flag);
    printf("Negative: %i\n", Neg_Flag);

    return 0;
}
