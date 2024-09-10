#define _CRT_SECURE_NO_WARNINGS 1
//判断是否为奇数
#include<stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);//输入
//	if (num % 2 == 1)
//		printf("%d 是奇数\n", num);//if语句成立时打印
//	else
//		printf("%d 是偶数\n", num);//不成立时打印
//	return 0;
//}
////if和else后面默认只能跟随一条语句，跟随多条语句得用{}括起来


//嵌套if语句
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num == 0)
//		printf("输入的值为零\n");
//	else//num不是零的时候执行下面的语句
//	{
//		if (num > 0)
//			printf("输入的值为正数\n");
//		else//除去num零和大于零的情况，即num小于零时，就执行下面的语句
//			printf("输入的数为负数\n");
//	}
//	return 0;
//}

//另一种形式：

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num == 0)
//		printf("输入的值为零\n");
//	else if (num > 0)
//			printf("输入的值为正数\n");
//	else
//			printf("输入的数为负数\n");
//	return 0;
//}



//判断年纪
int main()
{
	int age = 0;
	//输入
	scanf("%d", &age);
	//判断与输出
	if (age < 18)// <18
		printf("少年\n");
    else if (age <= 44)// 18-44
		printf("青年\n");
	else if (age <= 59)// 45-59
		printf("中年\n");
	else if (age <= 89)// 60-89
		printf("老年\n");
	else
		printf("老寿星\n");
	return 0;
}