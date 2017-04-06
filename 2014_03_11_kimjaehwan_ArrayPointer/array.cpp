#include<stdio.h>

void Max(int a[], int b)
{
	int c, d;
	int e;
	for (c = 0; c<b - 1; c++)
	{
		for (d = 0; d<(b - c) - 1; d++)
		{
			if (a[d + 1]>a[d])
			{
				e = a[d];
				a[d] = a[d + 1];
				a[d + 1] = e;
			}
		}
	}
}

int main(void)
{
	int a[9];
	int c;
	for (c = 0; c<10; c++)
	{

		printf("10명의성적을입력받으시오%d\n");
		scanf("%d", &a[c]);
	}
	Max(a, sizeof(a) / sizeof(int));
	for (c = 0; c<10; c++)
		printf("%d\n", a[c]);
	return 0;
}