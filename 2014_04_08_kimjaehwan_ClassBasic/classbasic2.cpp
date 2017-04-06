
#include<iostream>
using namespace std;
class Printer
{
private:
	char a[100];

public:
	void SetString(char*s)
	{
		strcpy(a, s);
	}


	void ShowString(void)
	{
		cout << a << endl;
	}
};

int main(void)
{
	Printer pnt;
	pnt.SetString("hello world");
	pnt.ShowString();

	pnt.SetString("Ilove C++");
	pnt.ShowString();
	return 0;
}