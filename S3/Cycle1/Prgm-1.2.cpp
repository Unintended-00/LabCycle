
// Program-2:

/* Define a class Date that contains details like year, month and date. Write a
        C++ program to check the validity of the date that you enter and display
        the next date.
	    Sample 1 : 02/ 03/ 1990
	        Valid, Next date: 03/03/1990
	    Sample 2: 29/02/1989
	        Not Valid
    */

#include <iostream>
using namespace std;

class Date
{
private:
    int dd, mm, yy, d1, m1, y1;
    bool val, leap;

public:
    void input()
    {
        cout << "Enter a date(dd/mm/yyyy):  ";
        cin >> dd >> mm >> yy;
    }
    void validator();
    void nxt_date();
    void output()
    {
        if (val)
        {
            cout << "Valid, Next date: " << d1 << "-" << m1 << "-" << y1;
        }
        else
        {
            cout << "Not Valid.";
        }
    }
};

void Date::validator()
{
    if (dd > 0 && dd <= 31 && mm > 0 && mm <= 12 && yy > 99 && yy <= 9999)
    {
        /* if (mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12)
        {
            val = true;
        } */

        val = true;
        if (dd < 31 && (mm == 4 || mm == 6 || mm == 9 || mm == 11))
        {
            val = true;
        }
        else if (mm == 2 && (yy % 4 == 0 || (yy % 100 == 0 && yy % 400 == 0)))
        {
            if (dd <= 29)
            {
                val = true;
                cout << "Leap yr and valid";
            }
            else
            {
                val = false;
            }
        }
        else if (mm == 2 && dd < 29)
        {
            val = true;
            cout << "Not leap yr but valid";
        }
        else
        {
            val = false;
            cout << "not valid";
        }
    }
    else
    {
        val = false;
        // cout << "Not valid";
    }
}

int main()
{
    Date d;
    d.input();
    d.validator();

    cin.ignore();
    cin.get();
    return 0;
}