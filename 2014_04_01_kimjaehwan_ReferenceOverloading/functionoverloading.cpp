#include<iostream>
int min(int a, int b)
{
	if (a<b)
		return a;
	else
		return b;
}
double min(double c, double d)
{
	if (c<d)
		return c;
	else
		return d;
}
float min(float e, float f)
{
	if (e<f)
		return e;
	else
		return f;
}


int main(void)
{
	int num1, num2, result;
	std::cout << "Input Number: ";
	std::cin >> num1;
	std::cout << "Input Number: ";
	std::cin >> num2;
	result = min(num1, num2);
	result = min(num1, num2);
	result = min(num1, num2);
	std::cout << result;
	return 0;
}