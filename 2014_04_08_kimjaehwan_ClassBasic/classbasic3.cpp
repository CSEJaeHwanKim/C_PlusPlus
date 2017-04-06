
#include<iostream>
#define Pi 3.14
using namespace std;

class Rectangle
{
private:
	double a;
	double b;
public:
	Rectangle(double num1,double num2)
	{	
		a=num1;
		b=num2;
	}
	double GetArea(void)
	{
		double i;
		i=(2*a)+(2*b);
		return i;
	}
	double GetAround(void)
	{
		double j;
		j=(a*b);
		return j;
	}
};

class Circle
{
private:
	double a;
public:
	Circle(double num1)
	{
		a=num1;
	}

	double GetArea(void)
	{
		double i;
		i=Pi*a*2;
		return i;
	}
	double GetAround(void)
	{
		double j;
		j=Pi*a*a;
		return j;
	}

};

int main(void)
{

	Rectangle rec(3,4);
	/*rec.GetArea(3,4);
	rec.GetAround(3,4);*/
	Circle ring(5);
	/*ring.GetArea(5);
	ring.GetAround(5);*/
	cout<<"Area : "<<rec.GetArea()<<endl;
	cout<<"Circumference : "<<rec.GetAround()<<endl;
	cout<<"Area : "<<ring.GetArea()<<endl;
	cout<<"Circumference : "<<ring.GetAround()<<endl;

	return 0;
}


