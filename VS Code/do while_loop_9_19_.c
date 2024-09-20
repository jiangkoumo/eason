#include <stdio.h>
//使用do while语句打印1~10
// int main()
// {
//     int i = 1;
//     do
//     {
//         printf("%d ", i);
//         i++;
//     } 
//     while (i <= 10);

//     return 0;
        
// }

//输入一个正整数，计算这个数是几位数
int main()
{
    int n = 0;
    scanf("%d", &n);
    int count = 0;
    do
    {
        ++count; //最少也是一位数，所以先自加1.
        n = n / 10;
    } 
    while (n);
    printf("%d", count);

    return 0;
}