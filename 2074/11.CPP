// friend function is a function that can access private members of a class even though it is not a member of that class.
#include <iostream>
using namespace std;
class B;
class A
{
private:
    int numA;

public:
    A(int x)
    {
        numA = x;
    }
    friend int multiply(A, B);
};
class B
{
private:
    int numB;

public:
    B(int y)
    {
        numB = y;
    }

    friend int multiply(A, B);
};
int multiply(A objA, B objB)
{
    return objA.numA * objB.numB;
}
int main()
{
    A objA(5);
    B objB(10);
    int result = multiply(objA, objB);
    cout << "Multiplication result: " << result << endl;
    return 0;
}
