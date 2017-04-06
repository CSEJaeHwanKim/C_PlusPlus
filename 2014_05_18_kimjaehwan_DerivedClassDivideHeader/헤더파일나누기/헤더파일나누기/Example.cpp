#include "rect.h"
#include <iostream>

using namespace std;

int main()
{
   
   Rect rc1;
   rc1.Print();
   rc1.SetRect(10, 20, 30, 40);
   rc1.Print();
   rc1.SetTopLeft(Point(20, 20));
   rc1.Print();
   cout << "rc1.GetWidth() = " << rc1.GetWidth() << " \n";
   cout << "rc1.GetHeight() = " << rc1.GetHeight() << " \n";

   return 0;
}