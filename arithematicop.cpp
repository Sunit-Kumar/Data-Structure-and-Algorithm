#include<iostream>
using namespace std;

int main()
{
    int a, b, c;
    int *x, *y, *z;
    x = &a;
    y = &b;
    z = &c;
    cout << "Enter two values " << endl;
    cin >> *x >> *y;
    // Arithematic operations using pointer
    *z = *x + *y;
    cout << "The sum of the numbers is :" << *z << endl;
    *z = *x - *y;
    cout << "The difference of the numbers is :" << *z << endl;

    *z = *x * *y;
    cout << "The multiplication of the numbers is :" << *z << endl;

    try
    {
        if (*y != 0)
        {
            *z = *x / *y;
            cout << "The division of the numbers is :" << *z << endl;
        }
        else
            throw "Division by zero is not possible";
    }
    catch (const char *e)
    {
        cout << e << endl;
    }
    
    return 0;
}