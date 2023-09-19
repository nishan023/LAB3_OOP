#include<iostream>
using namespace std;
class A
{
    protected:
    int adata;
};
class B :public A
{
    int bdata;
    public:
    B(int a,int b)
    {
        adata=a;
        bdata=b;
    }
    void showdata()
    {
        cout<<"adata="<<adata<<endl<<"bdata="<<bdata;

    }
};
int main()
{
    B b(5,6);
    b.showdata();
    return 0;
}