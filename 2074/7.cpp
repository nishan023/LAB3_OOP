/*They are accessible within the class that declares them
and also within derived classes. They are not directly accessible from outside the class.*/
#include <iostream>
using namespace std;
class person
{
protected:
    string name;

public:
    person(const string &n)
    {
        name = n;
    }
    void introduce()
    {
        cout << "I am " << name << ". ";
    }
};
class student : public person
{
    int stdid;

public:
    student(const string &n, int id) : person(n)
    {
        stdid = id;
    }
    void showstdid()
    {
        cout << "My ID is:" << stdid;
    }
};
int main()
{
    student s("Nishan", 23111);
    s.introduce();
    s.showstdid();
    return 0;
}
