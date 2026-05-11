#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    a = a << 2;

   
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << a << "\n"
         << b << endl;

    return 0;
}