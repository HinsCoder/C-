//��1�����³�����ÿ����� 4 ������� a ���顣���е��Ѷ��⣩
//#include "stdio.h" 
//int main()
//{
//   int a[12], i;
//for (i = 0; i < 12; i++)
//scanf("%d",a[i]);
//for (i = 0; i < 12; i++)
//{
//if (i%4==0);
//printf("%6d", a[i]);
//}
//printf("\n");
//}

//2�����������ַ��� s1��s2 �� s3������ s1 = "abcdef"�� s2 = "123456"��Ҫ�����ַ�����ʵ��
//�� s1 �����ݸ��Ƶ� s3 �У����� s2 ��������ӵ� s3 �ĺ��棬������ s3��
//#include "stdio.h" 
//int main()
//{
//	char s1 = "abcdef", s2 = "123456", s3[20] = "";
//	i = 0;
//	j = 0;
//	while (s1[i]!='\0')
//	{
//		s3[i] = s1[i]; i++;
//	}
//	i--;
//	while (s2[j] != '\0')
//	{s3[i]=s2[j]; j++;
//	}
//	for (j=i,i=0;i) 
//		printf("%c", s3[i]);
//}

//�Ӽ�������ʮ������һ��һά���鸳ֵ���������е�������ŵ���һ�������к����� 
//��������������ĸ�����
//#include<stdio.h>
//int main()
//{
//	int s1[15], s2[15], i, j;
//	for (i = 0, j = 0; i < 10; i++)
//	{
//		scanf("%d", &s1[i]);
//		if (s1[i] % 2 != 0) { s2[j] = s1[i]; j++; }
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", s1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < j; i++)
//	{
//		printf("%d ", s2[i]);
//	}
//	printf("\n");
//}

//(2) �����һ�� m* n �Ķ�ά����������Ԫ�ص����ֵ��Ԫ�ؿ����������
#include<stdio.h>
void main()
{
	int a[5][5], max, i, j;
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			scanf("%d", &a[i][j]);
	max = a[0][0];
	for (i = 0; i < 5; i++)
	for (j = 0; j < 5; j++)
		if (a[i][j] > max)
		{
			max = a[i][j];
		}
	printf("�����Ϊ��%d\n",max);
}
