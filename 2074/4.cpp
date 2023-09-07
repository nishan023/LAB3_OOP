/*Constructor is a special member function that is executed automatically when object is created
*/
#include<iostream>
using namespace std;
class Rectangle
{
    private:
    int length,breadth;
    public:
    Rectangle()
    {
        length=4;
        breadth=6;
    }
    Rectangle(int l)
    {
        length=l;
        breadth=8;
    }
    Rectangle(int l,int b)
    {
        length=l;
        breadth=b;
    }
    void display()
    {
        cout<<"Length="<<length<<endl<<"Breadth="<<breadth<<endl;
    }
};
int main()
{
    Rectangle r1;
    Rectangle r2(6);
    Rectangle r3(6 ,8);
    cout<<"....DISPLAYING DATA....."<<endl;
    r1.display();
    r2.display();
    r3.display();
    return 0;
}