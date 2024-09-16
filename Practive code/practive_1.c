//判断两个数的大小关系
#include <stdio.h>

int main()
{
    int a , b = 0;
    while (scanf("%d %d", &a, &b) != EOF)
    {
        if (a == b)
        printf("%d = %d\n", a, b);
        else if (a > b)
        printf("%d > %d\n", a, b);
        else
        printf("%d < %d\n", a, b);
    }
    return 0;
}