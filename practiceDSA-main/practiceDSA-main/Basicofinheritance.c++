#include <bits/stdc++.h>
using namespace std;
class Base
{
public:
    void function()
    {
        cout << "Printing the using the base class" << endl;
    }
};
class Derived : public Base
{
public:
    void function1()
    {
        cout << "Printing the data from the derived class function" << endl;
    }
};
int main()
{
    Derived d;
    d.function();
    d.function1();
    return 0;
}