#include<iostream>
using namespace std;

class Point
{
  private:
    int x, y;
  public:
     
     Point(int _x=0,int _y=0):x(_x),y(_y) {}
      void ShowPosition();
     Point operator+(const Point &p1);
   
};

void Point::ShowPosition()
{
   cout <<  x << "," << y << endl;
}

Point Point::operator+(const Point &p1)
{
   
      Point temp;
      temp.x=x+p1.x;
      temp.y=y+p1.y;

      return temp;
}

template <typename T>
T Add(T &x,T &y)
{
   return x+y;
}

int main(void)
{
   Point p1(1,2);
   Point p2(1,2);
  Point p3 =Add(p1, p2);
  p3.ShowPosition();

   return 0;
}


