#include <iostream>
using namespace std;

int main()
{
    char ch;
    cin >> ch;

    bool isUpper = (ch >= 'A' && ch <= 'Z');
    bool isLower = (ch >= 'a' && ch <= 'z');

    cout << "Uppercase: " << isUpper << endl;
    cout << "Lowercase: " << isLower << endl;
    cout << "Not a letter: " << !(isUpper || isLower) << endl;

    return 0;
}