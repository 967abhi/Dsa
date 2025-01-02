#include <bits/stdc++.h>
using namespace std;
class strategy
{
    double order_qty;
    double price;
    string account_name;

public:
    strategy(double qtr, double price, string name)
    {
        order_qty = qtr;
        price = price;
        account_name = name;
    }
    void printdata()
    {
        cout << "quantity data = " << order_qty << endl;
        cout << "price of the card = " << price << endl;
        cout << "username of the card = " << account_name << endl;
    }
};

int main()
{
    strategy obj1(10, 200.00, "abhishek");
    obj1.printdata();
    strategy obj2(obj1);
    obj2.printdata();

    return 0;
}