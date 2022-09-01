//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//void main()
	/*int num;
	for (num = 1; num <= 10; num++)
	{
		printf("%d\n", num);
	}
	printf("hello,word!\n");*/


	/*int main()
	{
		int input = 0;
		printf("你要认真学习吗？(1/0)\n");
		scanf("%d", &input);

		if (input == 1)
		printf("未来可期\n");
		else
			printf("回家烤红薯\n");
	
		return 0;
	}*/


//int main()
//{
//	int line = 0;
//		while(line < 30000)
//	    {
//			printf("%d:埋头写代码\n",line);
//			line++;
//	    }
//	
//		if (line == 30000)
//		{
//			printf("勤学苦练，终将获得光明未来\n");
//		}
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//
//	//int sum = num1 + num2;
//	int sum = Add(num1, num2);
//	printf("%d\n", sum);
//
//	return 0;
//}


//int main()
//{
//	/*int a = 1;
//	int b = 2;
//	int c = 3;
//	int d = 4;*/
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	/*char ch[5] = { 'a','b','c','d'};*/
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d", arr[i]);
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = a + 5;
//	a += 5;
//
//	a = a - 3;
//	a -= 3;
//
//	return 0;
//}


//int main()
//{
//	//sizeof是一个操作符
//	//不是函数
//	//计算类型或变量的大小
//	int a = 10;
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr[0]));
//
//	return(0);
//}

//int main()
//{
//	//~按位取反
//	int a = 1;
//	printf("% d\n", ~a);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = ++a;
//	printf("%d\n", b);
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 0;
//	int MAX = 0;
//	
//	MAX = a > b ? a : b;
//	printf("%d\n", MAX);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	printf("%d\n", arr[6]);
//	//[]为 下标引用操作符 
//	return 0;
//}

//int main()
//{
//	register int num = 10;
//	//建议num的值放在寄存器中
//	//大量的、频繁的被使用的数据，想放在寄存器中，提升效率	
//	return 0;
//}

//typedef unsigned int u_int;
////typedf 类型重定义关键字
//
//int main()
//{
//	unsigned int num = 0;
//	u_int num = 100;
//
//	return 0;
//}

//void test()
//{
//	static int a = 1;//static修饰局部变量，改变了局部变量的生命周期（本质上是改变了变量的储存类型）
// 使得函数只能在自己所在的源文件内部使用，不能在其他源文件内部使用
// 本质上：static是将函数的外部链接属性变成了内部连接属性！（和stetic修饰全局变量一样）
//	a++;
//	printf("%d ", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//extern int g_val;
////extern 声明外部符号
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}


//extern int add(int x, int y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}

#define ADD(x,y)((x)+(y))

int main()
{
	printf("%d\n", 4 * ADD(2, 3));
	return 0;
}
