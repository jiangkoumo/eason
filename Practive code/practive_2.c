#include <stdio.h>
//打印1~100中三的倍数的数字
// int main()
// {
//     int num = 0;
//     for (num = 1; num <= 100; num++)
//     {
//         if (num % 3 == 0)
//         {
//             printf("%d ", num);
//         }
//     }
//     return 0;
// }


int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d %d %d", &a, &b, &c);
    if (a < b)
    {
        int tmp = a;
        a = b;
        b = tmp;
    }
    if (a <c)
    {
        int tmp = a;
        a = c;
        c = tmp;
    }
    if (b < c)
    {
        int tmp = b;
        b = c;
        c = tmp;
    }
    printf("%d %d %d", a, b, c);
    return 0;
}