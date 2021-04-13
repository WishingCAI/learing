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
//int main()//打印素数
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j <=sqrt(i); j++)//i=a*b a和b必定有一个<=i平方根
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
//int main()//打印素数
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)//试除法
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
//int main()//闰年
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
//int main()//闰年
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
//int main()//求最大公约数
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (r=m % n)//辗转相除法
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
//		printf("请输入密码:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)//== 不能用来比较两个字符串是否相等,应该用一个库函数
//		{
//			printf("登陆成功\n");
//				break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//
//	}
//	if (i == 3)
//	{
//		printf("登陆失败\n");
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
//		//n的阶乘
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
//	for (;;)//for循环的3部分都能省略  
//			//判断部分如果被省略，那判断条件就是：恒为正
//	 `{
//		printf("hehe\n");
//	}
//	return 0;
//}
//for 前闭后开区间   不在循环内修改变量
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
//	for (i=1;i<=10;i++)//（初始化；判断；调整）
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;//初始化
//	while (i < 10)//判断
//	{
//		
//		i++;//调整
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
//	printf("输入密码:>");
//	scanf("%s", password);
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认(Y/N):>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}
//int main()
//{
//	//ctrl + z
//	//EOF - end of file  文件结束标志-> -1
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
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	defalut:
//		printf("输入错误\n");
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
//		printf("偶数\n");
//	else
//		printf("奇数\n");
//	return 0;
//}
//结构体
//struct book
//{
//	char name[20];
//	short price;
//};
//
//int main()
//{
//	//.  结构体变量.成员
//	//-> 结构体指针->成员
//	struct book b1 = { "c语言", 55 };
//	strcpy(b1.name,"c++");//strcpy-string copy - 字符串拷贝 - 库函数-string.h
//	struct book* pb = &b1;
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);
//	printf("%s\n", (*pb).name);
//	printf("%d\n", (*pb).price);
//	printf("书名:%s\n", b1.name);
//	printf("价格:%d元\n", b1.price);
//	b1.price = 15;
//	printf("修改后的价格:%d元\n", b1.price);
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
//	int a = 10;//向内存申请4个字节的空间
//	printf("%p\n", &a);
//	int* p = &a;//p是一个指针变量
//	printf("%p\n", p);
//	*p = 20;
//	printf("a=%d\n", a);
//	return 0;
//}
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	printf("%d\n", sizeof(pc));//32位一个指针4个字节,64位8个字节
//	*pc = 'a';
//	printf("%c\n",ch);
//	return 0;
//}
////int main()
//{
//	int a = 10;//申请空间放个10
//	int* p = &a;//申请空间放a的地址
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	*p = 20;//*->解引用操作符(间接访问操作符)
//	printf("%d\n", a);
//	return 0;
//}
////#define MAX 100//#define定义的标识符常量
//函数的实现
//Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
////宏的定义
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	//int a = MAX;
//	int a = 10;
//	int b = 20;
//	//函数
//	int max = Max(a, b);
//	printf("max=%d\n", max);
//	//宏的方式
//	max = MAX(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}
//static 修饰局部变量，使局部变量生命周期变长
//static 修饰全局变量，使全局变量作用域发生改变，让静态的全局变量只能在自己所在的源文件内部使用
//static 修饰函数，改变了函数的链接属性，外部链接属性 -> 内部链接属性
//void test()
//{
//	static int a = 1;//a是一个静态的局部变量
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
//	//typedef - 类型定义 -类型重定义
//	typedef unsigned int u_int;
//	unsigned int num = 20;
//	u_int num2 = 20;
//	return 0;
//}
////int main()
//{	register int a = 10;//建议把a定义成寄存器变量
//	int a = 10;
//	a = -2;
//	int定义的变量是有符号的
//	（省略signed） int;
//	unsigned int num = 1;（无符号，总是为正的）
//	struct - 结构体关键字
//	union - 联合体/共用体
//
//	return 0;
//}
//int main()
//{
//	(省略auto) int a = 10;//局部变量（自动变量）
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
//	arr[4];//[]--下标引用操作符
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//()--函数操作符
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//
//	max = (a > b ? a : b);//条件（三目）操作符
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	return 0;
//}
//int main()
//{
//	int a = 3.14// 从“double”转换到“int”，可能丢失数据
//	int a=(int)3.14//(类型)强制类型转换
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//int b = a++;//后置++，先赋值，再++
//	int b = ++a;//前置++，先++，再幅值
//	printf("a = %d b =  %d\n", a, b);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = ~a;//~  按（二进制）位取反
//	printf("%d\n", b);//打印的是原码
//存储中的最高位区分正负   正为0   负为1
//原码、反码、补码
//只要是整数，内存中存储的都是二进制的补码
//正数--原码，反码，补码  相同
//补码--》反码：-1，反之+1
//反码--》原码：符号位不变，其它位按位取反
//负数在内存中存储的时候，***存储的是二进制的补码***
//-2
//100000000000000000000000000000010 - 原码
//111111111111111111111111111111101 - 反码(转变的中间状态)
//111111111111111111111111111111110 - 补码
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
//	printf("%d\n", sizeof a);//okay可去括号
//	printf("%d\n", sizeof int);//err不可去括号
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