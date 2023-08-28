#include <iostream>
using namespace std;

class Marks
{
private:
    static int nextRollNumber;

protected:
    string name;
    float marks[3];
    int rollNumber;

public:
    Marks() : rollNumber(nextRollNumber++)
    {
        name = "";
        for (int i = 0; i < 3; i++)
        {
            marks[i] = 0;
        }
    }
    void getData()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter marks in Physics, Chemistry, and Mathematics: ";
        cin >> marks[0] >> marks[1] >> marks[2];
    }
    float getTotalMarks()
    {
        return marks[0] + marks[1] + marks[2];
    }
    void displayDetails()
    {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Total Marks: " << getTotalMarks() << endl;
        cout << "-----------------------------\n";
    }
};

int Marks::nextRollNumber = 1;

class Physics : public Marks
{
};
class Chemistry : public Marks
{
};
class Mathematics : public Marks
{
};

int main()
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Marks *stud[n];
    for (int i = 0; i < n; i++)
    {
        stud[i] = new Physics();
        stud[i]->getData();
    }

    cout << "\nStudent Details:\n";
    for (int i = 0; i < n; i++)
    {
        stud[i]->displayDetails();
    }

    float totalMarks = 0;
    for (int i = 0; i < n; i++)
    {
        totalMarks += stud[i]->getTotalMarks();
        delete stud[i];
    }

    cout << "Average marks of the class = " << totalMarks / n << endl;

    return 0;
}
