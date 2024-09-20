#include <stdio.h>
//运用循环嵌套完成练习题
//找出100~200之间的素数并打印在屏幕上
int main()
{
    int num = 0;
    for (num = 100; num <= 200; num++) //c产生2~num-1之间的数字，去试除num
    {
        int i = 0;
        int a = 1;//用a = 1来表示num是素数
        for (i = 2; i <= num - 1; i++)
        {
            if (num % i == 0)//如果整除则不是素数，用下面的break提前结束当前循环
            {
                a = 0;//用a = 0来表示当前num不是素数
                break;//用于结束当前for循环
            }
        }
        if (a == 1)//a == 1即代表当前的num是素数
        {
            printf("%d ", num);//打印当前已经判断为素数的num值
        }
    }
    return 0;
}