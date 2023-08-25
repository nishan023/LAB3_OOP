#include <iostream>
using namespace std;
void divide(int a, int b)
{
    if (b == 0)
        throw b;
    else
        cout << "Result =" << (float)a / b << endl;
    ;
}
int main()
{
    int a, b;
    cout << "Enter two numbers :" << endl;
    cin >> a >> b;
    try
    {
        divide(a, b);
    }
    catch (int i)
    {
        cout << "Divide by zero exception :b=" << i << endl;
    }
    cout << "END" << endl;
}
