
// Program-1:

    /* A phone number, such as (212) 767-8900, can be thought of as having three
        parts: the area code (212), the exchange (767), and the number (8900).
        Write a C++ program that uses a structure to store these three parts of a
        phone number separately. Call the structure phone. Create two structure
        variables of type phone. Initialize one, and have the user input a number
        for the other one. Then display both numbers. The interchange might look
        like this:
	    Enter your area code, exchange, and number: 415 555 1212
	        My number is (212) 767-8900
	        Your number is (415) 555-1212 
    */

#include <iostream>
using namespace std;

struct phone
{
    int ar_code, exchange, num;
} p, p1;

int main()
{
    p1.ar_code = 212, p1.exchange = 767, p1.num = 8900;
    cout << "Enter your area code, exchange and number:  ";
    cin >> p.ar_code >> p.exchange >> p.num;
    cout << "\nMy number is: (" << p1.ar_code << ") " << p1.exchange << "-" << p1.num;
    cout << "\nYour number is: (" << p.ar_code << ") " << p.exchange << "-" << p.num << endl;

    cin.ignore();
    cin.get();
    return 0;
}