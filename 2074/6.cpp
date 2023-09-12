#include <iostream>
using namespace std;
void greatest(int num1, int num2, int num3)
{
    if (num1 > num2 && num1 > num3)
    {
        cout << num1 << "is greatest" << endl;
    }
    else if (num2 > num1 && num2 > num3)
    {
        cout << num2 << "is greatest" << endl;
    }
    else
    {
        cout << num3 << "is greatest" << endl;
    }
}
int main()
{
    int num1, num2, num3;
    cout << "Enter three numbers:";
    cin >> num1 >> num2 >> num3;
    greatest(num1, num2, num3);
    return 0;
}