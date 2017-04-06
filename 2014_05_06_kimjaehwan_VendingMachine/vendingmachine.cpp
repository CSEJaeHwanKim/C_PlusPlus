#include<iostream>
using namespace std;
#define Item_Max 6

struct Item
{
	char *name;
	int price;
};

Item Menu[Item_Max]={"Juice", 500, "Cider", 400, "BongBong", 600, "Cold Coffee", 700, "Green Tea", 800, "Coke", 350};

class VendMachine
{
	Item *Menu1;
	int Inmoney;
	int Item_num;
	int Change;
public:
	VendMachine()
	{
		Menu1=Menu;
		Inmoney=0;
		Item_num=0;
		Change=0;
	}

	void DisplayMenu()
	{
		cout<<"***menu****"<<endl;
		cout<<"0.Juice 500"<<endl;
		cout<<"1.Cider 400"<<endl;
		cout<<"2.BongBong 600"<<endl;
		cout<<"3.Cold Coffee 700"<<endl;
		cout<<"4.Green Tea 800"<<endl;
		cout<<"5.Coke 350"<<endl;
		cout<<"***********"<<endl;

	}

	void GetMoney()
	{
		cout<<"Only 1000Won, 500Won, 100Won"<<endl;
		while(1)
		{
			cin>>Inmoney;
			if(Inmoney!=1000&&Inmoney!=500&&Inmoney!=100)
				cout<<"Error~ Rekey!"<<endl;
			else
				break;
		}
	}

	void SelectItem()
	{
		cout<<"Select Menu"<<endl;
		
			while(1)
		{
			cin>>Item_num;
			if(Item_num>6)
				cout<<"Error~ Rekey!"<<endl;
			else
				Change=Inmoney-Menu1[Item_num].price;
				cout<<"Change"<<Change<<endl;
		}
		
	}
};
int main(void)
{
   VendMachine A1; 
   A1.DisplayMenu();
   A1.GetMoney(); 
   A1.SelectItem();  
   return 0;
} 

