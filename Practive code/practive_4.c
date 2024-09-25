//编写程序数一下1到 100 的所有整数中出现多少个数字9
#include <stdio.h>

int main()
{
    int i = 0;
    int num = 0;
    for (i = 1; i <= 100; i++)
    {
        int a = i;
        while (a > 0)
        {
            if (a % 10 == 9)
            {
                num++;
            }
            a /= 10;
        }
    }
    printf("9的个数是 %d\n", num);

    return 0;
}