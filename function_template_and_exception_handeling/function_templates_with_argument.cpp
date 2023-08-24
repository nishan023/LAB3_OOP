#include <iostream>
using namespace std;
template <class T, class U>
T getmax(T a, U b)
{
    T result;
    result = (a > b) ? a : b;
    return (result);
}
int main()
{
    int i, j = 4;
    float m = 7;
    i = getmax<int, float>(j, m);
    cout << i << endl;
    return 0;
}