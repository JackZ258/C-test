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
		printf("��Ҫ����ѧϰ��(1/0)\n");
		scanf("%d", &input);

		if (input == 1)
		printf("δ������\n");
		else
			printf("�ؼҿ�����\n");
	
		return 0;
	}*/


//int main()
//{
//	int line = 0;
//		while(line < 30000)
//	    {
//			printf("%d:��ͷд����\n",line);
//			line++;
//	    }
//	
//		if (line == 30000)
//		{
//			printf("��ѧ�������ս���ù���δ��\n");
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
//	//sizeof��һ��������
//	//���Ǻ���
//	//�������ͻ�����Ĵ�С
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
//	//~��λȡ��
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
//	//[]Ϊ �±����ò����� 
//	return 0;
//}

//int main()
//{
//	register int num = 10;
//	//����num��ֵ���ڼĴ�����
//	//�����ġ�Ƶ���ı�ʹ�õ����ݣ�����ڼĴ����У�����Ч��	
//	return 0;
//}

//typedef unsigned int u_int;
////typedf �����ض���ؼ���
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
//	static int a = 1;//static���ξֲ��������ı��˾ֲ��������������ڣ��������Ǹı��˱����Ĵ������ͣ�
// ʹ�ú���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ�ã�����������Դ�ļ��ڲ�ʹ��
// �����ϣ�static�ǽ��������ⲿ�������Ա�����ڲ��������ԣ�����stetic����ȫ�ֱ���һ����
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
////extern �����ⲿ����
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
