#include<stdio.h> 
int main()
{
	int paixu(int a[], int n);
	int a[10];
	int i = 0;
	printf("enter data:\n");
	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	paixu(a, 10);
	for (i = 0; i < 10; i++)
		printf("%5d", a[i]);
	printf("\n");
}
int paixu(int a[], int n)
{
	int i, j, m;
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
			if (a[i] > a[j])
			{
				m = a[i];
				a[i] = a[j];
				a[j] = m;
			}
	return 0;
}