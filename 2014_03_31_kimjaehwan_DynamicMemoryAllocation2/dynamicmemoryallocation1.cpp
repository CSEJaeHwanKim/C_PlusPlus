#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int arrlen = 5;
	int a = 0;
	int i;
	int *arr = (int*)malloc(sizeof(int)*arrlen);
	while (1)
	{
		printf("Input number:");
		scanf("%d", &arr[a]);
		if (arr[a] == -1)
			break;
		if (arrlen == a + 1)
		{
			arrlen += 3;
			arr = (int*)realloc(arr, sizeof(int)*arrlen);
		}
		a++;
	}
	for (i = 0; i<a; i++)
		printf("%d", arr[i]);
	free(arr);
	return 0;
}