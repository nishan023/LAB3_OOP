#include <iostream>
using namespace std;
class Mammals
{
public:
    void display()
    {
        cout << "I am mammal" << endl;
    }
};
class Marine_Animals
{
public:
    void display()
    {
        cout << "I am a marine animal" << endl;
    }
};
class Blue_Whale : public Mammals, public Marine_Animals
{
public:
    void display()
    {
        cout << "I belong to both the categories: Mammals as well as Marine Animals" << endl;
    }
};
int main()
{
    Mammals m;
    m.display();
    Marine_Animals ma;
    ma.display();
    Blue_Whale bw;
    bw.display();
    bw.Mammals::display();
    bw.Marine_Animals::display();
    return 0;
}