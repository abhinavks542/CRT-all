#include <iostream>
using namespace std;

int main()
{
    int age;
    cin >> age;

    bool discount = (age < 12) || (age >= 65);
    bool working = (age >= 18) && (age <= 64);

    cout << "Discount Eligible: " << discount << endl;
    cout << "Working Age: " << working << endl;

    return 0;
}