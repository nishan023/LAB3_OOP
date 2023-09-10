#include<iostream>
using namespace std;
int mul(int a ,int b )
{
    return (a*b);
}
float mul(float a , float b)
{
    return (a*b);
}
int main()
{
    int x=2,y=5;
    float m=3.0,n=5.0;
    cout<<mul(x,y)<<endl;
    cout<<mul(m,n);
    return 0;
}
