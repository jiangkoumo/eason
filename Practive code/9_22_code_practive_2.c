#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//猜数字游戏
//电脑随机生成1~100之间的数，玩家猜数字，并根据玩家所猜数字给出大了或小了的反馈，直到猜对
void menu()//将菜单页面单独封装成一个函数
{
        printf("***********************\n");
        printf("***********************\n");
        printf("******* 1. play *******\n");
        printf("******* 0. exit *******\n");
        printf("***********************\n");
        printf("***********************\n");
}

void game()
{
    //游戏的逻辑
    //1.生成随机数
    int r = rand() % 100 + 1;
    int guess = 0;
    int count = 5;
    while (count)
    {
        printf("还有%d次机会\n", count);
        printf("游戏开始，请猜数字：");
        scanf("%d", &guess);
        if (guess > r)
        {
            printf("猜大了\n");
        }
        else if (guess < r)
        {
            printf("猜小了\n");
        }
        else
        {
            printf("恭喜你猜对了\n");
            break;
        }
        count--;
    }
    if (count == 0)
    {
        printf("次数用尽，猜数字失败，正确的值是%d", r);
    }
}

int main()
{
    int input = 0;
    //设置随机数的生成起点
    //整个工程中只调用一次
    srand((unsigned int)time(NULL));

      do
      {
        //打印菜单
        menu();

        //选择
        printf("请选择：");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            game();
            break;
        case 0:
            printf("退出游戏");//调用game函数
            break;
        default:
            printf("选择错误，请重新选择");
            break;
        }
      }
      while (input);
      
    return 0;
}