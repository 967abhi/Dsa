#include <bits/stdc++.h>
using namespace std;
class OrderBuilder
{
public:
    OrderBuilder(string aname, int id)
    {
        exchange_name = aname;
        exchange_id = id;
    }
    int exchange_id;
    string exchange_name;
};
class strategy
{
    double order_qty;
    double price;
    string username;
    OrderBuilder *ob;

public:
    strategy(double qty, double pr, string name) : order_qty(qty), price(pr), username(name)
    {
        cout << "Inside the constructor";
        OrderBuilder *obj = new OrderBuilder("CME", 107);
        ob = obj;
    };
    ~strategy()
    {
        cout << "Destructor called" << endl;
        delete ob;
    }
    void printdata()
    {
        cout << "quantity data = " << order_qty << endl;
        cout << "price of the card = " << price << endl;
        cout << "username of the card = " << username << endl;
        cout << "exhcnage of the card = " << ob->exchange_name << endl;
    }
};
int main()
{
    strategy *obj1 = new strategy(10, 100.00, "abhisehk");
    obj1->printdata();
    strategy obj2(*obj1);
    delete obj1;
    obj2.printdata();
    return 0;
}