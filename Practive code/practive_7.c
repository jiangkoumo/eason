//给定两个数，求这两个数的最大公约数
#include <stdio.h>
int main()
{
    int num1 = 0;
    int num2 = 0;

    printf("请输入两个整数：");
    scanf("%d %d", &num1, &num2);

//欧几里得算法，用于计算最大公约数
    while (num2 != 0)
    {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    printf("最大公约数是：%d\n", num1);

    return 0;
}