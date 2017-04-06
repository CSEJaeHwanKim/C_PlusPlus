
#include<iostream>

int neg(int *a)
{
	int i;
	i = *a*(-1);

	return i;
}

int neg(int &ref1)
{
	int temp;
	temp = ref1;
	return temp;
}

int main(void)
{
	int num1, result1, result2;
	std::cout << "Input Number: ";
	std::cin >> num1;
	result1 = neg(&num1);
	result2 = neg(num1);
	std::cout << result1;
	std::cout << result2;
	return 0;
}