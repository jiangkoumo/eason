#include <stdio.h>

// int Add(int x,int y)
// {
//     // int z = 0;
//     // z = x + y;
//     // return z;
//     return x + y;
// }

// int main()
// {
//     int a = 0;
//     int b = 0;
//     int c = 0;
//     scanf("%d %d", &a, &b);
//     c = Add(a, b);
//     printf("%d", c);

//     return 0;
// }


//计算某年某月有多少天

//判断是否是闰年
int is_leap_year(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        return 1;
    }
    return 0;
}

//计算某年某月有多少天
int get_days_of_month(int year, int month)
{
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int day = days[month - 1];
    if (month == 2 && is_leap_year(year) == 1)
    {
        day += 1;
    }
    return day;
}

//主函数
int main()
{
    int year = 0;
    int month = 0;
    int days = 0;
    scanf("%d %d", &year, &month);
    days = get_days_of_month(year, month);
    printf("%d", days);
    return 0;
}
