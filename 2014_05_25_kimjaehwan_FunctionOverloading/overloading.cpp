#include<iostream>
#include<cmath>
#define PI 3.14
using namespace std;
class Point 
{
protected:
	int x;
	int y;
public:
	Point(int _x,int _y)
	{
		x=_x;
		y=_y;
	}
	void SetX(int _x)
	{
		x=_x;
	}
	void SetY(int _y)
	{
		y=_y;
	}
	int GetX()
	{
		return x;
	}
	int GetY()
	{
		return y;
	}
	void CenterPoint()
	{
		cout<<" x: "<<x<<endl;
		cout<<" y: "<<y<<endl;
	}
};
class Circle:public Point
{
protected:
	double radius;
public:
	Circle(int _x, int _y, double _radius):Point(x,y)
	{
		x = _x;
		y = _y;
		radius = _radius;
	}
	Circle(Point center, Point p):Point(x,y)
	{
		x = center.GetX();
		y = center.GetY();
		radius = (sqrt((double)(p.GetX()-x)*(p.GetX()-x)+(p.GetY()-y)*(p.GetY()-y)))/2;
	}
	double Distance(Point &p1)
	{
		return (sqrt((double)(p1.GetX()-x)*(p1.GetX()-x)+(p1.GetY()-y)*(p1.GetY()-y)));
	}
	double Getradius(Point &p1)
	{
		return (sqrt((double)(p1.GetX()-x)*(p1.GetX()-x)+(p1.GetY()-y)*(p1.GetY()-y)))/2;
	}
	double Getradius()
	{
		return radius;
	}

	double GetArea()
	{
		return PI*radius*radius;
	}
	double GetVolume()
	{
		return 0;
	}
	void SetDiameter(Point p1, Point p2)
	{
		x = (p1.GetX()+p2.GetX())/2;
		y = (p1.GetY()+p2.GetY())/2;
		radius = this->Distance(p1);
	}
	void CircleInformation(Point p)
	{
		cout<<" ****Circle**** "<<endl;
		cout<<" Coordinate : ("<<p.GetX()<<','<<p.GetY()<<')'<<endl;
		cout<<" Radius : "<<radius<<endl;
		cout<<" The area of a circle : "<<this->GetArea()<<endl;
	}
	void CircleInformation()
	{
		cout<<" ****Circle***** "<<endl;
		cout<<" Coordinate : ("<<x<<','<<y<<')'<<endl;
		cout<<" Radius : "<<radius<<endl;
		cout<<" The area of a circle : "<<this->GetArea()<<endl;
	}
};
class Sphere:public Circle
{
public:

	Sphere(Circle c1):Circle(x,y,radius)
	{
		x = c1.GetX();
		y = c1.GetY();
		radius = c1.Getradius();
	}
	
	double GetArea1()
	{
		return (4*PI*radius*radius);
	}

	double GetVolume1()
	{
		return ((4/3)*PI*radius);
	}
	void SphereInformation()
	{
		cout<<" ****Circle***** "<<endl;
		cout<<" Coordinate : ("<<x<<','<<y<<')'<<endl;
		cout<<" The area of a circle : "<<GetArea1()<<endl;
		cout<<" The volume of a circle : "<<GetVolume1()<<endl;
	}

};
/*class Cylinder:public Circle
{
protected:
	int height;
public:
	Cylinder(int x,int y,int radiusX, int radiusY,int height1):Circle(x,y,radiusX,radiusY)
	{
		height=height1;
	}

	double GetArea2()
	{
		Getradius();
		return ((2*PI*radius*radius)+(2*PI*radius*height));
	}

	double GetVolume2()
	{
		Getradius();
		return (height*PI*radius);
	}
	void CylinderInformation()
	{
		cout<<" ÁÂÇ¥ x,y: "<<GetX()<<GetY()<<endl;
		cout<<" ¿ø±âµÕÀÇ ¹ÝÁö¸§: "<<Getradius()<<endl;
		cout<<" ¿ø±âµÕÀÇ ¸éÀû: "<<GetArea2()<<endl;
		cout<<" ¿ø±âµÕÀÇ ºÎÇÇ: "<<GetVolume2()<<endl;
	}

};*/

int main(void)
{
	Point center(1,2);
	Point A2(4,5);
	Circle B1(center,A2);
	B1.CircleInformation(A2);

	cout<<endl;
	Point p5(4,5);
	Point p6(-2,3);
	B1.SetDiameter(p5,p6);
	B1.CircleInformation();

	cout<<endl;
	Sphere S1(B1);
	S1.SphereInformation();

	return 0;
}