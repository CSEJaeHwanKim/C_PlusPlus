#include <iostream>
#include <cmath>
using namespace std;
class Point
{
private:
   double xpos;
   double ypos;
public:
   Point(double x, double y) : xpos(x), ypos(y){};
   
   void SetX(double num1)
   {
      xpos=num1;
   }
   
   void SetY(double num2)
   {
      ypos=num2;
   }
   
   double GetX()
   {
      return xpos; 
   }
   
   double GetY()
   {
      return ypos;
   }

   double Distance(Point &p1)
   {
      double a, b;
	  double distance;
      a = (GetX() - p1.GetX());
      b = (GetY() - p1.GetY());
      distance = sqrt((a*a)+(b*b));
      return distance;
   }

   void ShowData(Point &p1)
   {
      cout<<"First Coordinate : "<<GetX()<<','<<GetY()<<endl;
      cout<<"Second Coordinate : "<<p1.GetX()<<','<<p1.GetY()<<endl;
      cout<<"Distance between two point : "<<Distance(p1)<<endl;
   }

   int GetArea()
   {
      return 0;
   }

   int GetVolume()
   {
      return 0;
   }

   char* GetName()
   {
      char *a = "POINT";
      return a;
   }
};

int main()
{
   Point p1(1,2);
   Point p2(7,8);
   p1.Distance(p2);
   p1.ShowData(p2);
   p1.GetArea();
   p1.GetVolume();
   cout<<" Function Call : "<<p1.GetName()<<endl;
   return 0;   
}