#include <bits/stdc++.h>
using namespace std;
class Strategy
{
    double order_qty;

public:
    void setQty(double order_qty)
    {
        this->order_qty = order_qty;
        cout << "order quantity" << order_qty << endl;
        // cout << "order quantity" << order_qty << endl;
    }
};
int main()
{
    Strategy s;
    s.setQty(10.5);

    return 0;
}