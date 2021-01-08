#include <iostream>
using namespace std;

void todo(int &x, int &y, int &z)
{
    cout << "Enter two numbers :  ";
    cin >> x >> y;
    z = x + y;
    cout << "The sum of the numbers is " << z << endl;
}

int main()
{
    int a, b, c = 0;
    todo(a, b, c);

    cin.get();
    return 0;
}