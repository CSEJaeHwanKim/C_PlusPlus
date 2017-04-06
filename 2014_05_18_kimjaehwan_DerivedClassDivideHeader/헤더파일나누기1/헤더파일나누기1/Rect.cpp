#include "rect.h"
#include <iostream>
using namespace std;

Rect::Rect()
{
}
Rect::Rect(Point& _topleft, Point& _bottomright)
{
	_topLeft=_topleft;
    _bottomRight= _bottomright;
}
Rect::Rect(int a,int b,int c,int d)
{
	_topLeft.SetX(a);
	_topLeft.SetY(b);
	_bottomRight.SetX(c);
	_bottomRight.SetY(d);
}
void Rect::Print() const
	{
		cout<<" L: "<<_topLeft.GetX()<<" T: "<<_topLeft.GetY()<<" R: "<<_bottomRight.GetX()<<" B: "<<_bottomRight.GetY()<<endl;
		
	}