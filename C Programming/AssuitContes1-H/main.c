#include <stdio.h>

int main() {
    double n = 0, k =0, a =0;

    scanf("%lf%lf%lf", &n, &k, &a);
    //printf("%f %f %f\n", n, k, a);
    double result = ((n * k)/a);// 35.5
    long long MyNum = result;//35
    double MyRes = (result - MyNum);//.5
    //printf("%lld\n", MyNum);
    if((MyRes) > 0)
    {
        printf("double\n");
    }
    else if((MyNum >= -2147483648) && (MyNum <= 2147483647))
    {
        printf("int\n");
    }
    else{
        printf("long long\n");
    }


  return 0;
}
