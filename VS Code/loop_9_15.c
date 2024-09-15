#include <stdio.h>
//判断是否为闰年
// int main()
// {
//     int year = 0;
//     scanf("%d", &year);
//     if((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//     printf("%d年是闰年", year);
//     return 0;
// }

//判断除3后的余数
// int main()
// {
//     int a = 0;
//     scanf("%d", &a);
//     switch (a % 3)
//     {
//     case 0:
//        printf("余数是0");
//        break;
//     case 1:
//        printf("余数是1");
//        break;
//     case 2:
//        printf("余数是2");
//        break;

//     }
//     return 0;
// }

int main()
{
    int week = 0;
    scanf("%d", &week);
    switch (week)
    {
    case 1:
       printf("星期一\n");
       break;
    case 2:
       printf("星期二\n");
       break;
    case 3:
       printf("星期三\n");
       break;
    case 4:
       printf("星期四\n");
       break;
    case 5:
       printf("星期五\n");
       break;
    case 6:
       printf("星期六\n");
       break;
    case 7:
       printf("星期天\n");
       break;
    default :
       printf("输入错误,输入的值应该在1~7的范围");
       break;
    }
    return 0;
}