#include <stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 4;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d", a, b);
//	return 0;
//}
//写一个函数返回参数二进制中 1 的个数。
//int main()
//{
//	int count = 0;
//	int n = 1;
//	int m = 0;
//	scanf_s("%d", &m);
//	for (n = 1; n <= m; n = (2 * n))
//	{
//		if ((n & m) == n)
//		{
//			count++;
//		}
//	}
//	printf("%d",count);
//	return 0;
//}
//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//int main()
//{
//	int n=11;
//	int i = 0;
//	i = 31;
//	printf("二进制：");
//	while (i >= 0)
//	{
//		printf("%d ", (n >> i) & 1);
//		i--;
//	}
//	printf("\n奇数位：");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n偶数位：");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	return 0;
//}
//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int i = 0;
//	int count = 0;
//	scanf_s("%d%d", &m, &n);
//	for (i = 31; i >= 0; i--)
//	{
//		int a = (m >> i) & 1;
//		int b = (n >> i) & 1;
//		if (a != b)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
