#define _CRT_SECURE_NO_WARNINGS 1
//�ж��Ƿ�Ϊ����
#include<stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);//����
//	if (num % 2 == 1)
//		printf("%d ������\n", num);//if������ʱ��ӡ
//	else
//		printf("%d ��ż��\n", num);//������ʱ��ӡ
//	return 0;
//}
////if��else����Ĭ��ֻ�ܸ���һ����䣬�������������{}������


//Ƕ��if���
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num == 0)
//		printf("�����ֵΪ��\n");
//	else//num�������ʱ��ִ����������
//	{
//		if (num > 0)
//			printf("�����ֵΪ����\n");
//		else//��ȥnum��ʹ�������������numС����ʱ����ִ����������
//			printf("�������Ϊ����\n");
//	}
//	return 0;
//}

//��һ����ʽ��

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num == 0)
//		printf("�����ֵΪ��\n");
//	else if (num > 0)
//			printf("�����ֵΪ����\n");
//	else
//			printf("�������Ϊ����\n");
//	return 0;
//}



//�ж����
int main()
{
	int age = 0;
	//����
	scanf("%d", &age);
	//�ж������
	if (age < 18)// <18
		printf("����\n");
    else if (age <= 44)// 18-44
		printf("����\n");
	else if (age <= 59)// 45-59
		printf("����\n");
	else if (age <= 89)// 60-89
		printf("����\n");
	else
		printf("������\n");
	return 0;
}