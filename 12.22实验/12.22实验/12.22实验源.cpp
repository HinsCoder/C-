//��׳�
#include<stdio.h>
int main(void)
{
	int i,n;
	double sum=0;
	printf("������һ��������");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		sum = sum+1.00000 / i;
	printf("��Щ���ĺ�Ϊ��%lf\n", sum);
		return 0;
}


//���������
//#include<stdio.h>
//int main(void)
//{
//	int n, upnumber, j, i;
//	printf("������һ��������");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		upnumber = 1;
//		for (j = n; j > i; j--)
//		{
//			printf("  ");
//		}
//		if (i != 1)
//		{
//			printf("1");
//			for (j = 1; j <= i - 2; j++)
//			{
//				printf("  %d", upnumber = (i - j) * upnumber / j);
//			}
//			printf("   1\n");
//		}
//		else {
//			printf("1\n");
//		}
//	}
//	return 0;
//}
	
	


