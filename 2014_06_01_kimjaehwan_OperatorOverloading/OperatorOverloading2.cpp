#include<iostream>
using namespace std;
class point 
{
private:
   int x, y;
public:
	point(int x1=0, int y1=0)
{
	x=x1;
	y=y1;
}
 void ShowPosition();
 friend ostream& operator <<(ostream& os, const point& p);
 friend istream& operator >>(istream& is, point& p);
};
void point::ShowPosition()
 { 
	 cout<<x<<" "<<y<<endl; 
 }
ostream& operator<<(ostream& os, const point& p)
		{
			os<<p.x<<p.y<<endl;
			return os;
		}
		
istream& operator>>(istream& is, point& p)
		{
			is>>p.x>>p.y;
			return is;
		}

int main(void)
{  
   
  point p;
  cout << p;
  cout << "x, y Input: " ;
  cin >> p; // operator >> (cin, p);
  cout << p;
  return 0;
}




	