#include<stdio.h>
#include<stdlib.h>

#define raw 256
#define colum 256


void add(unsigned char*inimage, int add1)
{
	int i;
	int b;
	for (i = 0; i<(raw*colum); i++)
	{
		b = inimage[i] + add1;
		if (b>255)
		{
			b = 255;
			inimage[i] = b;
		}
		else
			inimage[i] = b;
	}

}
void sub(unsigned char*inimage, int sub1)
{
	int i;
	int b;
	for (i = 0; i<(raw*colum); i++)
	{
		b = inimage[i] - sub1;
		if (b<0)
		{
			b = 0;
			inimage[i] = b;
		}
		else
			inimage[i] = b;
	}

}

void max1(unsigned char*inimage, int max12)
{
	int i;
	int b;
	for (i = 0; i<(raw*colum); i++)
	{
		b = inimage[i] * max12;
		if (b>255)
		{
			b = 255;
			inimage[i] = b;
		}
		else
			inimage[i] = b;
	}
}

void min1(unsigned char*inimage, int min12)
{
	int i;
	int b;
	for (i = 0; i<(raw*colum); i++)
	{
		b = inimage[i] / min12;
		if (b<0)
		{
			b = 0;
			inimage[i] = b;
		}
		else
			inimage[i] = b;
	}
}
int main(void)
{
	unsigned char * a = (unsigned char*)malloc(raw*colum);
	FILE*inimage;
	FILE*outimage;
	inimage = fopen("lena.raw", "rb");
	outimage = fopen("lena1.raw", "wb");
	if (inimage == NULL || outimage == NULL)
	{
		puts("File open fail");
		return -1;
	}

	fread(a, sizeof(unsigned char), 256 * 256, inimage);

	add(a, 30);
	sub(a, 50);
	fwrite(a, sizeof(unsigned char), 256 * 256, outimage);
	fclose(inimage);
	fclose(outimage);
	free(a);

	return 0;
}