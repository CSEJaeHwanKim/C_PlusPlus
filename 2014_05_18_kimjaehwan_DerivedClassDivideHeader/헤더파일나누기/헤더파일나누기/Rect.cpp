#include "rect.h"
#include <iostream>
using namespace std;


Rect::Rect(){}
   
void Rect::SetTopLeft(const Point& topLeft)
	{
		_topLeft=topLeft;
	}

void Rect::SetBottomRight(const Point& bottomRight)
	{
		_bottomRight=bottomRight;
	}
void Rect::SetRect(int left, int top, int right, int bottom)
	{

		_topLeft.SetX(left);
		_topLeft.SetY(top);
		_bottomRight.SetX(right);
		_bottomRight.SetY(bottom);
    }

Point Rect::GetTopLeft() const
	{
		return _topLeft;
	}
Point Rect::GetBottomRight() const
	{
		return _bottomRight;
	}

int Rect::GetRectSize(int& left, int& top, int& right, int& bottom)
	{
		_topLeft.SetX(left);
		_topLeft.SetY(top);
		_bottomRight.SetX(right);
		_bottomRight.SetY(bottom);
		return 0;
	}

  
int Rect::GetWidth() const
	{
		int width=((_bottomRight.GetX()-_topLeft.GetX())*(_topLeft.GetY()-_bottomRight.GetY()));
		if(width<0)
			return width*(-1);
		return width;
	}
	int Rect::GetHeight() const
	{
		int height=(_topLeft.GetY()-_bottomRight.GetY());
		if(height<0)
			return height*(-1);

		return height;
	}
   
	void Rect::Print() const
	{
		cout<<" L: "<<_topLeft.GetX()<<" T: "<<_topLeft.GetY()<<" R: "<<_bottomRight.GetX()<<" B: "<<_bottomRight.GetY()<<endl;
		
	}
