
/*����ʾ���������������ĸ��� n�������� n �����������ж������Ƿ�Ϊ����������������
ֻ�ܱ� 1 ��������������������1 ����������2 ����������*/

#include<stdio.h>
#include<math.h>
void main()
{
	int i, j, k, m, n;
	printf("�����������ĸ��� n:");
	scanf("%d", &n);
	printf("����%d��������\n",n);
	k = n;
	for (j = 0; j < k; j++)
	{
		scanf("%d", &m);
		n = sqrt(m);
		for (i = 2; i <=n; i++)
			if (m % i == 0)
				break;
		if (i > n)
			printf("%d��һ������!\n", m);
		else
			printf("%d����һ������!\n", m);
	}

}

/*��̣���� 101��115 ֮�䲻�ܱ� 3 ����������ÿ����� 5 ����Ҫ��ʹ�� continue ��䡣*/

#include<stdio.h>
#include<math.h>
void main()
{
	int i, j = 0;
	for (i = 101; i <= 115; i++)
	{
		if (i % 3 == 0)
			continue;
		else
		{
			j++;
			printf("%-4d", i);
			if (j % 5 == 0)
				printf("\n");
		}
	}
}


/*��̣�����һ���������������� n ��������������е����ֵ�������ÿ�������� 100
��200 ֮�䣬���ĳ������������ 100��200 ֮�䣬��ֻ�����ڸ�����ǰ��������ݡ�*/

#include<stdio.h>
#include<math.h>
void main()
{
	int i, m, n, max=0;
	scanf("%d\n", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &m);
		if (m < 100 || m>200)
			break;
		if (max < m)
			max = m;
	}
	printf("%d\n", max);
}

/*��̣����ӳ������⣺���ӵ�һ��ժ�����ɸ����ӣ���������һ�룬������񫣬�ֶ��
��һ������ 2 �����Ͻ�ʣ�µ����ӳԵ�һ�룬�ֶ����һ�����Ժ�ÿ�����϶�����ǰһ��ʣ
�µ�һ���һ�������� 10 ���������ٳԵ�ʱ�򣬼�ֻʣ��һ�������ˡ�
��� 1 �칲ժ�˶������ӣ�*/
#include<stdio.h>
#include<math.h>
void main()
{
	int i = 9, x, t = 1;
	while (i > 0)
	{
		x = (t + 1) * 2;
		t = x;
		i--;
	}
	printf("��һ��ժ��%d������\n", x);

}/*˼��������Ŀ�еĵ� 10 ���Ϊ�� n �죬�����һ�����ӣ���Ϊ����� 2 �����ӣ���α�̡�*/
#include<stdio.h>
#include<math.h>
void main()
{
	
	int i,n, x, t = 1;
	scanf("%d", &n);
	i = n - 1;
	while (i > 0)
	{
		x = (t + 2) * 2;
		t = x;
		i--;
	}
	printf("��һ��ժ��%d������\n", x);
}