#include <iostream>

using namespace std;

class Shape
{
public:
    void display()
    {
        cout << "This is a shape." << endl;
    }
};

class Polygon : public Shape
{
public:
    void display()
    {
        cout << "Polygon is a shape." << endl;
    }
};

class Rectangle : public Polygon
{
public:
    void display()
    {
        cout << "Rectangle is a polygon." << endl;
    }
};

class Triangle : public Polygon
{
public:
    void display()
    {
        cout << "Triangle is a polygon." << endl;
    }
};

class Square : public Rectangle
{
public:
    void display()
    {
        cout << "Square is a rectangle." << endl;
    }
};

int main()
{
    Square s;
    Triangle t;
    Rectangle r;
    Polygon p;
    Shape sh;
    sh.display();
    p.display();
    r.display();
    t.display();
    s.display();
    return 0;
}
