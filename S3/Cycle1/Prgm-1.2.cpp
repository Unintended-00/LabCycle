#include <iostream>
using namespace std;

void todo(int &x, int &y, int &z)
{
    cout << "Enter two numbers :\t";
    cin >> x >> y;
    z = x + y;
    cout << "The sum of the numbers is " << z;
}

int main()
{
    int a, b, c = 0;
    todo(a, b, c);
}