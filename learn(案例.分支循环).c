#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//��д������1 - 100 �����������г���9�ĸ���

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//		printf("%d\n", count);
//	}
//	return 0;
//}

//����1-1/2+1/3-1/4+...+1/99-1/100

//int main()
//{
//	int i = 0.0;
//	double sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//		{
//			sum -= 1.0 / i;
//		}
//		else
//		{
//			sum += 1.0 / i;
//		}
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//
//int main()
//{
//	int i = 0.0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag *(1.0 / i);
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


//��ʮ�����������ֵ

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}


//�˷��ھ���
//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9


int main()
{
	int i = 0;
	//����
	for (i = 1; i <= 9; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", i, j, i * j);
			//%2d��ӡ�����������ÿո����
			//%-2d�����
		}
		printf("\n");
	}
	return 0;
}


//