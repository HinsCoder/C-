/*������� a,b,c����һԪ���η��� ax2+bx+c=0 �ĸ���*/
/*
#include<stdio.h>
#include<math.h>
void main()
{
	double a, b, c, d;
	printf("����һԪ���η��� a=,b=,c=\n");
	scanf_s("a=%,b=%lf,c=%lf", &a, &b, &c);
	d = b * b - 4 * a * c;
	if (a == 0)
	{
		if (b == 0)
		{
			if (c == 0)lf
				printf("0==0�����Է��������壡");
			else
				printf("c!= 0 ���̲�����");
		}
		else
			printf("x=%0.2f\n", -c / b);
	}
	else
	{
		if (d >= 0)
		{
			printf("x1=%0.2f\n", (-b + sqrt(d)) / (2 * a));
			printf("x2=%0.2f\n", (-b - sqrt(d)) / (2 * a));
		}
		else
		{
			printf("x1=%0.2f+%0.2fi\n", -b / (2 * a), sqrt(-d) / (2 * a));
			printf("x2=%0.2f-%0.2fi\n", -b / (2 * a), sqrt(-d) / (2 * a));
		}
	}

}
*/

/*��̣����� x,���㲢������зֶκ��� f(x)��ֵ������ 2 λС����*/


#include<stdio.h>
#include<math.h>
void main()
{
	double x, y;
		printf("����x\n");
		scanf("x=%lf", &x);
		if (x < 1)
		        printf("y=%0.2f\n", x);
		else
		{
			if (1 <= x < 10)
				printf("y=%0.2f\n", 2 * x - 1);
		}
		  else 
			    printf("y=%0.2f\n", 3*x-11);	
}


/*��̣��Ѱٷ��Ƴɼ�ת���� 5 ���Ƿ��ƣ�Ҫ���� switch ��䡣*/
/*
#include<stdio.h>
int main()
{
	double score;
	printf("�����������\n");
	scanf_s("%lf", &score);
	switch ((int)(score / 10))
	{
	case 10:
	case 9:printf("A(���)\n"); break;
	case 8:printf("B(����)\n"); break;
	case 7:printf("C(����)\n"); break;
	case 6:printf("D(����)\n"); break;
	case 5:
	case 4:
	case 3:
	case 2:
	case 1:
	case 0:printf("E(������)\n"); break;
	default:printf("Error!\n");
	}
}
*/
