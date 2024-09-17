#include <stdio.h>

//打印1~10的数字（while语句练习）
// int main()
// {
//   int i = 0;//初始化语句
//   while (i <= 10)//判断语句
//   {
//      printf("%d ", i);
//      i++;//调整语句
//   }

//     return 0;
// }

//for语句同样的效果打印
int main()
{
    int i = 0;
    for (i=1; i<=10; i++)  //for(初始化表达式；判断表达式；调整表达式)，for循环的初始化只执行一次
    {
        printf("%d ", i);
    }
    return 0;
}