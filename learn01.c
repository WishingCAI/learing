//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
//#include <math.h>


//int main()
//{
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	for (a = 1; a <= 9; a++)
//	{
//		int b = 1;
//		for (b = 1; b <= a; b++)
//		{
//			printf("%d*%d=%-2d ", a, b, a * b);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=&d\n", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//int main()//��ӡ����
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j <=sqrt(i); j++)//i=a*b a��b�ض���һ��<=iƽ����
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j >sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}
//int main()//��ӡ����
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)//�Գ���
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}
//int main()//����
//{
//	int year = 0;
//	int count = 0;
//	for(year=2000;year<=3000;year++)
//	{
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncont=%d\n", count);
//	return 0;
//}
//int main()//����
//{
//	int year = 0;
//	int count = 0;
//	for(year=2000;year<=3000;year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year) ;
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncont=%d\n", count);
//	return 0;
//}
//int main()//�����Լ��
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (r=m % n)//շת�����
//	{
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}
////int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)//== ���������Ƚ������ַ����Ƿ����,Ӧ����һ���⺯��
//		{
//			printf("��½�ɹ�\n");
//				break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//
//	}
//	if (i == 3)
//	{
//		printf("��½ʧ��\n");
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(500);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr1);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = ret * n;
//		//n�Ľ׳�
//		sum = sum = ret;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	do
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i++;
//	} 
//	while (i <= 10);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}
//int main()
//{
//	for (;;)//forѭ����3���ֶ���ʡ��  
//			//�жϲ��������ʡ�ԣ����ж��������ǣ���Ϊ��
//	 `{
//		printf("hehe\n");
//	}
//	return 0;
//}
//for ǰ�պ�����   ����ѭ�����޸ı���
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i=1;i<=10;i++)//����ʼ�����жϣ�������
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;//��ʼ��
//	while (i < 10)//�ж�
//	{
//		
//		i++;//����
//	}
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//			putchar(ch);
//	}
//	return 0;
//}
//int main()
//{
//	int ret = 0;
//	int ch = 0;	
//	char password[20] = { 0 };
//	printf("��������:>");
//	scanf("%s", password);
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ��(Y/N):>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
//	}
//	return 0;
//}
//int main()
//{
//	//ctrl + z
//	//EOF - end of file  �ļ�������־-> -1
//	int ch = 0;
//	while ((ch = getchar()) !=EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	defalut:
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		printf("%d ", i);
//		i += 2;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i<=100)
//	{
//		if (i%2 == 1)
//			printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	if (0 == a%2)
//		printf("ż��\n");
//	else
//		printf("����\n");
//	return 0;
//}
//�ṹ��
//struct book
//{
//	char name[20];
//	short price;
//};
//
//int main()
//{
//	//.  �ṹ�����.��Ա
//	//-> �ṹ��ָ��->��Ա
//	struct book b1 = { "c����", 55 };
//	strcpy(b1.name,"c++");//strcpy-string copy - �ַ������� - �⺯��-string.h
//	struct book* pb = &b1;
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);
//	printf("%s\n", (*pb).name);
//	printf("%d\n", (*pb).price);
//	printf("����:%s\n", b1.name);
//	printf("�۸�:%dԪ\n", b1.price);
//	b1.price = 15;
//	printf("�޸ĺ�ļ۸�:%dԪ\n", b1.price);
//	return 0;
//}
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}
//int main()
//{
//	double d = 3.14;
//	double* pd = &d;
//	printf("%d\n", sizeof(pd));
//	//*pd = 5.5;
//	//printf("%lf\n", d);
//	//printf("%lf\n", *pd);
//	return 0;
//}
//int main()
//{
//	int a = 10;//���ڴ�����4���ֽڵĿռ�
//	printf("%p\n", &a);
//	int* p = &a;//p��һ��ָ�����
//	printf("%p\n", p);
//	*p = 20;
//	printf("a=%d\n", a);
//	return 0;
//}
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	printf("%d\n", sizeof(pc));//32λһ��ָ��4���ֽ�,64λ8���ֽ�
//	*pc = 'a';
//	printf("%c\n",ch);
//	return 0;
//}
////int main()
//{
//	int a = 10;//����ռ�Ÿ�10
//	int* p = &a;//����ռ��a�ĵ�ַ
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	*p = 20;//*->�����ò�����(��ӷ��ʲ�����)
//	printf("%d\n", a);
//	return 0;
//}
////#define MAX 100//#define����ı�ʶ������
//������ʵ��
//Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
////��Ķ���
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	//int a = MAX;
//	int a = 10;
//	int b = 20;
//	//����
//	int max = Max(a, b);
//	printf("max=%d\n", max);
//	//��ķ�ʽ
//	max = MAX(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}
//static ���ξֲ�������ʹ�ֲ������������ڱ䳤
//static ����ȫ�ֱ�����ʹȫ�ֱ������������ı䣬�þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
//static ���κ������ı��˺������������ԣ��ⲿ�������� -> �ڲ���������
//void test()
//{
//	static int a = 1;//a��һ����̬�ľֲ�����
//	a++;
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
////int main()
//{
//	//int float;//err
//	//typedef - ���Ͷ��� -�����ض���
//	typedef unsigned int u_int;
//	unsigned int num = 20;
//	u_int num2 = 20;
//	return 0;
//}
////int main()
//{	register int a = 10;//�����a����ɼĴ�������
//	int a = 10;
//	a = -2;
//	int����ı������з��ŵ�
//	��ʡ��signed�� int;
//	unsigned int num = 1;���޷��ţ�����Ϊ���ģ�
//	struct - �ṹ��ؼ���
//	union - ������/������
//
//	return 0;
//}
//int main()
//{
//	(ʡ��auto) int a = 10;//�ֲ��������Զ�������
//	return 0;
//}
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//11111111111111111111111111111111    1*2^32-1
//100000000000000000000000000000000   1*2^32
//int main()
//{
//	int arr[10] = { 0 };
//	arr[4];//[]--�±����ò�����
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//()--����������
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//
//	max = (a > b ? a : b);//��������Ŀ��������
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	return 0;
//}
//int main()
//{
//	int a = 3.14// �ӡ�double��ת������int�������ܶ�ʧ����
//	int a=(int)3.14//(����)ǿ������ת��
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//int b = a++;//����++���ȸ�ֵ����++
//	int b = ++a;//ǰ��++����++���ٷ�ֵ
//	printf("a = %d b =  %d\n", a, b);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = ~a;//~  ���������ƣ�λȡ��
//	printf("%d\n", b);//��ӡ����ԭ��
//�洢�е����λ��������   ��Ϊ0   ��Ϊ1
//ԭ�롢���롢����
//ֻҪ���������ڴ��д洢�Ķ��Ƕ����ƵĲ���
//����--ԭ�룬���룬����  ��ͬ
//����--�����룺-1����֮+1
//����--��ԭ�룺����λ���䣬����λ��λȡ��
//�������ڴ��д洢��ʱ��***�洢���Ƕ����ƵĲ���***
//-2
//100000000000000000000000000000010 - ԭ��
//111111111111111111111111111111101 - ����(ת����м�״̬)
//111111111111111111111111111111110 - ����
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//	printf("%d\n", sizeof a);//okay��ȥ����
//	printf("%d\n", sizeof int);//err����ȥ����
//	return 0;
//}

//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max = Max(num1, num2);
//	printf("max = %d\n", max);
//	return 0;
//}