#include <bits/stdc++.h>
using namespace std;
class strategy
{
public:
    int order_qty;
    void PrintQuery()
    {
        cout << "Order Qty:\t"
             << order_qty << endl;
    }
};
int main()
{
    // automatic storage allocation
    strategy obj;
    obj.order_qty = 10;
    obj.PrintQuery();
    strategy *obj1 = new strategy();
    obj1->order_qty = 20;
    obj1->PrintQuery();
    delete obj1;
    return 0;
}