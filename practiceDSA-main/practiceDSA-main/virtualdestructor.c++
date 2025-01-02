#include <bits/stdc++.h>
using namespace std;
class Base
{
public:
    virtual ~Base()
    {
        cout << "Base destructor called" << endl;
    }
};
class Derived1 : public Base
{
public:
    ~Derived1()
    {
        cout << "Derived1 destructor called" << endl;
    }
};
class Derived2 : public Base
{
public:
    ~Derived2()
    {
        cout << "Deruved2 destructor called" << endl;
    }
};
int main()
{
    Base *bptr = new Derived2();
    delete bptr;

    return 0;
}
