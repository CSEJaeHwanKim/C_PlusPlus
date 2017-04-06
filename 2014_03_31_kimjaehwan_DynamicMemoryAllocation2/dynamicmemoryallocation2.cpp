#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
	int max, len, i;
	char *str;
	printf("Input Max String length: ");
	scanf("%d", &max);
	getchar();
	str = (char*)malloc(sizeof(char)*(max + 1));
	printf("Input String: ");
	fgets(str, max + 1, stdin);
	str[strlen(str) - 1] = 0;
	len = strlen(str);
	for (i = len; i>0; i--)
	{
		if (str[i] == ' ')
		{
			printf("%s", &str[i + 1]);
			str[i] = 0;
		}
	}
	printf("%s", &str[0]);
	return 0;
}



