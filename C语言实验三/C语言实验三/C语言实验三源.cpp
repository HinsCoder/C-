/*输入参数 a,b,c，求一元二次方程 ax2+bx+c=0 的根。*/
/*
#include<stdio.h>
#include<math.h>
void main()
{
	double a, b, c, d;
	printf("输入一元二次方程 a=,b=,c=\n");
	scanf_s("a=%,b=%lf,c=%lf", &a, &b, &c);
	d = b * b - 4 * a * c;
	if (a == 0)
	{
		if (b == 0)
		{
			if (c == 0)lf
				printf("0==0参数对方程无意义！");
			else
				printf("c!= 0 方程不成立");
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

/*编程，输入 x,计算并输出下列分段函数 f(x)的值（保留 2 位小数）*/


#include<stdio.h>
#include<math.h>
void main()
{
	double x, y;
		printf("输入x\n");
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


/*编程，把百分制成绩转换成 5 级记分制，要求用 switch 语句。*/
/*
#include<stdio.h>
int main()
{
	double score;
	printf("请输入分数：\n");
	scanf_s("%lf", &score);
	switch ((int)(score / 10))
	{
	case 10:
	case 9:printf("A(最好)\n"); break;
	case 8:printf("B(优秀)\n"); break;
	case 7:printf("C(良好)\n"); break;
	case 6:printf("D(及格)\n"); break;
	case 5:
	case 4:
	case 3:
	case 2:
	case 1:
	case 0:printf("E(不及格)\n"); break;
	default:printf("Error!\n");
	}
}
*/
