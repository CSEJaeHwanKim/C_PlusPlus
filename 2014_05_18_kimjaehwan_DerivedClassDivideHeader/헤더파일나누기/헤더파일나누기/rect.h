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
    // �� ���� �� ����/���
    void SetTopLeft(const Point& topLeft);
    void SetBottomRight(const Point& bottomRight);
    void SetRect(int left, int top, int right, int bottom);
    Point GetTopLeft() const;
    Point GetBottomRight() const;
    int GetRectSize(int& left, int& top, int& right, int& bottom);
  
   // ����, ���� ���
    int GetWidth() const;
    int GetHeight() const;
   // ���� ���
    void Print() const;

};
#endif