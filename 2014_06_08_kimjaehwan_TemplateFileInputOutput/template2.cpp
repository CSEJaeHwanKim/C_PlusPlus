#include <iostream>
using namespace std;
class Point
{
  private:
    int x, y;
  public:
	  
      Point( int _x=0, int _y=0) : x(_x), y(_y){}
      void ShowPosition()
	  {
		  cout << x << "   " << y << endl;
      }
	  
};

template <typename T>
void Swap(T& data1,T&data2)
{
	T temp=data1;
	data1=data2;
	data2=temp;
}
int main(void)
{
   Point p1(1,2);
   Point p2(100,200);

   Swap(p1, p2);
   p1.ShowPosition();  // 100, 200 출력
   p2.ShowPosition();   // 1, 2 출력
   
  int a = 10, b = 20;
  Swap(a, b);
  cout << a << "   "<< b << endl;
   return 0;
}


