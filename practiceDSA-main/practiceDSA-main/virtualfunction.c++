#include <bits/stdc++.h>
using namespace std;
class parent
{
public:
    virtual void function()
    {
        cout << "function from parent class";
    }
};
class child : public parent
{
public:
    void function()
    {
        cout << "function from child class";
    }
};
int main()
{
    child c;
    parent *p;
    p = &c;
    p->function();
    return 0;
}