#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


//void menu()
//{
//	printf("***************************\n");
//	printf("**1.��ʼ��Ϸ   0.�˳���Ϸ**\n");
//	printf("***************************\n");
//}
//
//void game()
//{
//	int ret = 0;
//	int guess = 0;
//	ret = rand() % 100 + 1;//��֤ret�����ֵ��0-100֮��
//	while (1)
//	{
//		printf("�������>:\n");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//int main()//��������Ϸ
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//int main()
//{
//	char inpur[20] = { 0 };
//	int input = 0;
//	system("shutdown - s - t 60");
//again:
//	printf("��ע�⣬��ĵ�����2�����ڹػ�����������������ȡ���ػ�");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

int main()//strcpy �ַ�������
{
	char arr1[] = "bit";
	char arr2[20] = "######";
	strcpy(arr2, arr1);//(Ŀ�ĵأ�Դͷ)
	printf("%s\n", arr2);
	return 0;
}


//memset
//memory -- �ڴ� set ��������
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr,'*',5);
//	printf("%s\n", arr);
//	return 0;


//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}


//void Swap(int*x,int*y)
//{
//	int tmp = 0;
//	tmp =*x;
//	*x = *y;
//	*y = tmp;
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}


//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}

//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for(year=1000;year<=2000;year++)
//		if (1 == is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	return 0;
//}