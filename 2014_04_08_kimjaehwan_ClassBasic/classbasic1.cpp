#include<iostream>
using namespace std;

class calcurator
{
private:
	double result;
	int addcount;
	int minuscount;
	int MAXcount;
	int MINcount;

public:
	void init(void)
	{
		addcount = 0;
		minuscount = 0;
		MAXcount = 0;
		MINcount = 0;
	}

	double add(double a, double b)
	{
		addcount++;
		result = a + b;

		return result;
	}

	double minus(double a, double b)
	{
		minuscount++;
		result = a - b;

		return result;
	}

	double MAX(double a, double b)
	{
		MAXcount++;
		result = a*b;

		return result;
	}

	double MIN(double a, double b)
	{
		MINcount++;
		result = a / b;
		return result;
	}
	void showcount(void)
	{
		cout << "Sum : " << addcount << endl;
		cout << "Subtraction : " << minuscount << endl;
		cout << "Multiplication : " << MAXcount << endl;
		cout << "Divide : " << MINcount << endl;
	}
};
int main(void)
{
	calcurator cal;
	cal.init();
	cout << cal.add(3, 4) << endl;
	cout << cal.minus(0, 0) << endl;
	cout << cal.MAX(2, 1) << endl;
	cout << cal.MIN(5, 1) << endl;
	cal.showcount();

	return 0;
}

