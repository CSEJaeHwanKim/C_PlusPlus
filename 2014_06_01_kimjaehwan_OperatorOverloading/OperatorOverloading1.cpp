#include<iostream>
using namespace std;
class point 
{
private:
   int x, y;
public:
point(int _x=0, int _y=0):x(_x), y(_y){}
void ShowPosition()
 { 
	 cout<<x<<" "<<y<<endl; 
 }

 point operator+(const point& p)
  { 
	  point temp;
      temp.x =x + p.x;
      temp.y =y + p.y;
      return temp;
 }
 void operator+(int val)
 {
     x += val;
     y += val;
 }
  point operator-(const point& p1)
  { 
	  point temp1;
      temp1.x =x - p1.x;
      temp1.y =y - p1.y;
      return temp1;
 }
 void operator-(int val1)
 {
     x -= val1;
     y -= val1;
 }
 bool operator !=(const point& p2) const
 {
	 return !( x == p2.x && y == p2.y);
 }


};
	int main(void)
{  
   point p1(4, 2);
   point p2(2, 1);
  
   point p3 = p1+p2;
   p3.ShowPosition();

   point p4 = p1-p2; // p1.operator-(p2);
   p4.ShowPosition();
   
   if(p1 != p2) 
	   cout << "Two Point Object Difference." << endl;
   else 
	   cout << " Two Point Object Same. " << endl; 

   if(p2 != p4) 
	   cout << "Two Point Object Difference." << endl;
   else 
cout << " Two Point Object Same. " << endl; 
   
   return 0;
}




	