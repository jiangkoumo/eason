// 求10个整数中最大值
#include <stdio.h>

int main()
{
    int arr[10];
    int max = 0;
    int i = 0;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = arr[0];

    for (i = 1; i < 10; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("最大值是 %d", max);
    return 0;
}