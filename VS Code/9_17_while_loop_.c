#include <stdio.h>

//打印1~10的数字（while语句练习）
// int main()
// {
//   int i = 0;//初始化语句
//   scanf("%d", &i);
//   while (i <= 10)//判断语句
//   {
//      printf("%d ", i);
//      i++;//调整语句
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