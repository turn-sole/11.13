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
//дһ���������ز����������� 1 �ĸ�����
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
//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
//int main()
//{
//	int n=11;
//	int i = 0;
//	i = 31;
//	printf("�����ƣ�");
//	while (i >= 0)
//	{
//		printf("%d ", (n >> i) & 1);
//		i--;
//	}
//	printf("\n����λ��");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\nż��λ��");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	return 0;
//}
//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
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
