//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
#include <stdio.h>

int main() {
    double result = 0.0;
    int i;

    for (i = 1; i <= 100; i++) 
    {
        if (i % 2 == 0) 
        {
            result -= 1.0 / i;
        } else 
        {
            result += 1.0 / i;
        }
    }

    printf("结果是: %lf\n", result);

    return 0;
}