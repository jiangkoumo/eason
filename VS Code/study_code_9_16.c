#include <stdio.h>

//打印1~10的数字（while语句练习）
// int main()
// {
//   int i = 0;
//   scanf("%d", &i);
//   while (i <= 10)
//   {
//      printf("%d ", i);
//      i++;
//   }

//     return 0;
// }

int main()
{
    int a = 0;
    scanf("%d", &a);

    while (a)
    {
        printf("%d ", a % 10);
        a = a / 10;
    }

    return 0;
}