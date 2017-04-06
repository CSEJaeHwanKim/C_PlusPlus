#include<stdio.h>
#include<stdlib.h>
#define MAX 3
struct game
{
	char id[50];
	char password[50];
	int score[10];
	int magicpoint;
	int healpoint;
};
struct game gameuser[MAX];
void PrnUser(FILE *fp)
{
	int i;
	char temp[10][20];

	for (i = 0; i < 5; i++)
		fscanf(fp, "%s", temp[i]);

	printf("%s %s %s %s %s\n", temp[0], temp[1], temp[2], temp[3], temp[4]);

	for (i = 0; i < MAX; i++)
		fscanf(fp, "%s %s %d %d %d %d %d %d %d\n", gameuser[i].id, gameuser[i].password, gameuser[i].score[0], gameuser[i].score[1],
		gameuser[i].score[2], gameuser[i].score[3], gameuser[i].score[4], gameuser[i].magicpoint, gameuser[i].healpoint);


	for (i = 0; i < MAX; i++)
		printf("%s %s %d %d %d %d %d %d %d\n", gameuser[i].id, gameuser[i].password, gameuser[i].score[0], gameuser[i].score[1],
		gameuser[i].score[2], gameuser[i].score[3], gameuser[i].score[4], gameuser[i].magicpoint, gameuser[i].healpoint);
}

int main(void)
{
	FILE *fp = fopen("user.txt", "rt");
	char ch;
	if (fp == NULL)
	{
		puts("File open fail");
		return -1;
	}

	while ((ch = fgetc(fp)) != EOF)
		fputc(ch, stdout);
	printf("\n");
	fclose(fp);
	return 0;

}


