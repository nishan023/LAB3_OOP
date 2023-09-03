/*Imagine a college hires some lectures. Some lectures are paid in period basic, while others are paid in month basic.
Create a class called lecture that stores ID and name of lectures. From this class derive two
classes: part time, which adds payperhr(type float): and full time, which adds
paypermonth(type float). Each of these three classes should have a readdata() function to
get its data from user at the key board and printdata() function to display the data.
Write a main() program to test the Full time and Part time classes by creating instance of
them asking the user to fill their data with readdata () and display the data with printdata().*/
#include <iostream>
using namespace std;
class lectures
{
private:
    int id;
    string name;

public:
    void readdata()
    {
        cout << "Enter ID:";
        cin >> id;
        cout << "Enter name:";
        cin >> name;
    }
    void printdata()
    {
        cout << "ID:" << id << endl;
        cout << "Name:" << name << endl;
    }
};
class parttime : public lectures
{
private:
    float payperhr;

public:
    void getdata()
    {

        cout << "Enter amount pay per hour: ";
        cin >> payperhr;
    }
    void printdatapt()
    {
        cout << "Paid amount per hour:" << payperhr << endl;
    }
};
class fulltime : public lectures
{
private:
    float paypermonth;

public:
    void getdata()
    {
        cout << "Enter amount pay per month : ";
        cin >> paypermonth;
    }
    void printdataft()
    {
        cout << "Paid amount per month:" << paypermonth << endl;
    }
};
int main()
{

    parttime p;
    cout << "\n......PART TIME......" << endl;
    p.readdata();
    p.getdata();
    cout << "\n.....DISPLAYING DATA......" << endl;
    p.printdata();
    p.printdatapt();
    fulltime f;
    cout << "\n......FULL TIME......" << endl;
    f.readdata();
    f.getdata();
    cout << "\n.....DISPLAYING DATA......" << endl;
    f.printdata();
    f.printdataft();
    return 0;
}