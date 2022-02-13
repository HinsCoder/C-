//#include<stdio.h>
//void fun1()
//{
//	int x = 5; 
//	printf("x=%d\n", x);
//}
//void fun2(int x)
//{
//	printf("x=%d\n", ++x);
//}
//main()
//{
//	int x = 2;
//	fun1();
//	fun2(x);
//	printf("x=%d\n", x);
//} 

//（1）定义一个能判断任意整数 a 是否是素的函数 isprime(int a)，并利用这一函数，输出 100~199 之间的所有素数。
#include<stdio.h>
#include<math.h>
void main()
{
	int isprime(int i);
	int i;
	for (i = 100; i < 200; i++)
	{
		if (isprime(i))
			printf("%3d,", i);
	}
	printf("\n");
}
int isprime(int x)
{
	int i;
	for (i = 2; i <= (int)sqrt(x); i++)
		if (x % i == 0)
			return 0;
	return 1;
}


////（2）定义一个函数递归函数 long f(int n) 求 n!，并利用此函数，求出 sum = 4!+ 6!+ 7!的值。
//#include<stdio.h>
//long f(int n)
//{
//	return n == 0 ? 1 : n * f(n - 1);
//}
//
//int main(void)
//{
//	printf("%ld\n", f(4) + f(6) + 7);
//	return 0;
//}