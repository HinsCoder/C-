
/*调试示例，输入正整数的个数 n，再输入 n 个正整数，判断它们是否为素数。（素数就是
只能被 1 和自身整除的正整数，1 不是素数，2 是素数）。*/

#include<stdio.h>
#include<math.h>
void main()
{
	int i, j, k, m, n;
	printf("输入正整数的个数 n:");
	scanf("%d", &n);
	printf("输入%d个正整数\n",n);
	k = n;
	for (j = 0; j < k; j++)
	{
		scanf("%d", &m);
		n = sqrt(m);
		for (i = 2; i <=n; i++)
			if (m % i == 0)
				break;
		if (i > n)
			printf("%d是一个素数!\n", m);
		else
			printf("%d不是一个素数!\n", m);
	}

}

/*编程，输出 101－115 之间不能被 3 整除的数，每行输出 5 个。要求使用 continue 语句。*/

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


/*编程，输入一个正整数，再输入 n 个整数，输出其中的最大值，输入的每个数都在 100
－200 之间，如果某个输入数不在 100－200 之间，则只处理在该数这前输入的数据。*/

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

/*编程，猴子吃桃问题：猴子第一天摘下若干个桃子，当即吃了一半，还不过瘾，又多吃
了一个。第 2 天早上将剩下的桃子吃掉一半，又多吃了一个。以后每天早上都吃了前一天剩
下的一半多一个。到第 10 天早上想再吃的时候，见只剩下一个桃子了。
求第 1 天共摘了多少桃子？*/
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
	printf("第一天摘了%d个桃子\n", x);

}/*思考：把题目中的第 10 天改为第 n 天，多吃了一个桃子，改为多吃了 2 个桃子，如何编程。*/
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
	printf("第一天摘了%d个桃子\n", x);
}