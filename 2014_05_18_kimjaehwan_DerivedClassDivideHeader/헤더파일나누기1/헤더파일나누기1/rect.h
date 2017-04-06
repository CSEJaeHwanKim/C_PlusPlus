#ifndef RECT_H
#define RECT_H
#include "Point.h"

class Rect
{
  protected:
     Point _topLeft;
     Point _bottomRight;

  public:
    // ������
    Rect();
	Rect(Point& _topleft, Point& _bottomright);
	Rect(int a,int b,int c,int d);
  
   // ���� ���
    void Print() const;

}; 
#endif