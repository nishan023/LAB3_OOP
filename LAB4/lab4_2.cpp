#include <iostream>
using namespace std;
class Fruit
{

public:
    static int sum;
    int calculate(int n1)
    {
        sum+= n1;
        return sum;
    }
    void display_fruits()
    {
        cout<<"The total number of fruits in basket: "<<sum<<endl;
    }
};
int Fruit::sum=0;
class Apples 
{
public:
    int num;
    Apples()
    {
        cout << "Enter the number of Apples: ";
        cin >> num;
    }
    Fruit f;
    void display()
    {
        cout<<"Number of Apples: "<<num<<endl;
    f.calculate(num);
    }
};
class Mangoes 
{
public:
    int num;
    Mangoes()
    {
        cout << "Enter the number of Mangoes: ";
        cin >> num;
    }
    Fruit f;
    void display()
    {
        cout<<"Number of Mangoes: "<<num<<endl;
    f.calculate(num);
    }
};
int main()
{
    Apples a;
    Mangoes m;
    Fruit f;
    m.display();
    a.display();
    f.display_fruits();
    return 0;
}