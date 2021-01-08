#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int n_char;
    cout << "Enter a string :  ";
    cin >> str;
    if (str.size() != 0)
    {
        n_char = str.size();
        cout << "The string contains " << n_char << " characters." << endl;
    }
    else
    {
        cout << "Enter a string...";
    }
    
    
    cin.get();
    cin.get();
}