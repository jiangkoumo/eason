#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

// // 判断数字是奇数还是偶数
// int main()
// {
//     int num = 0;
//     scanf("%d", &num); // 输入数字
//     if (num % 2 == 1)
//         printf("%d 是奇数\n", num); // 如果是奇数
//     else
//         printf("%d 是偶数\n", num); // 如果是偶数
//     return 0;
// }

// // 判断数字是正数、负数还是0
// int main()
// {
//     int num = 0;
//     scanf("%d", &num); // 输入数字
//     if (num == 0)
//         printf("输入的是0\n"); // 如果数字是0
//     else
//     {
//         if (num > 0)
//             printf("输入的是正数\n"); // 如果是正数
//         else
//             printf("输入的是负数\n"); // 如果是负数
//     }
//     return 0;
// }

// // 优化后的正负数和0判断
// int main()
// {
//     int num = 0;
//     scanf("%d", &num); // 输入数字
//     if (num == 0)
//         printf("输入的是0\n"); // 如果数字是0
//     else if (num > 0)
//         printf("输入的是正数\n"); // 如果是正数
//     else
//         printf("输入的是负数\n"); // 如果是负数
//     return 0;
// }

// 判断年龄阶段
// int main()
// {
//     int age = 0;
//     // 输入年龄
//     scanf("%d", &age);
//     // 判断年龄对应的阶段
//     if (age < 18) // 小于18岁
//         printf("未成年\n");
//     else if (age <= 44) // 18到44岁之间
//         printf("青年\n");
//     else if (age <= 59) // 45到59岁之间
//         printf("中年\n");
//     else if (age <= 89) // 60到89岁之间
//         printf("老年\n");
//     else // 大于等于90岁
//         printf("高龄\n");
//     return 0;
// }

//判断两个数的大小
int main()
{
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    int c = (a>b ? a : b); //三目运算符，若第一个表达式为真，则返回值第二个表达式；若为假，则返回值第三个表达式
    printf("c = %d", c);
    return 0;
}
