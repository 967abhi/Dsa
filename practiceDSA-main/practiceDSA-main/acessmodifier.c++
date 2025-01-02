// // #include <bits/stdc++.h>
// // using namespace std;
// // class strategy
// // {
// // protected:
// //     double qty;

// // public:
// //     double price;
// //     void printmulty()
// //     {
// //         int x;
// //         qty = 5;
// //         x = qty * price;
// //         cout << qty << endl;
// //         cout << "result of this " << x;
// //     }
// // };
// // int main()
// // {
// //     // accessing the public modifier
// //     strategy s1;
// //     // s1.qty = 20;
// //     s1.price = 2;
// //     s1.printmulty();
// //     return 0;
// // }
// // ===============Assignment1==============
// #include <bits/stdc++.h>
// using namespace std;
// class strategy
// {
// private:
//     int order_qty;
//     int limit_price;
//     int account_id;
//     string account_name;

// public:
//     // here the strategy which i created is constructor
//     strategy()
//     {
//         order_qty = 10;
//         limit_price = 200;
//         account_id = 32;
//         account_name = "abhishek kumar singh ";
//     }
//     void printdata()
//     {

//         cout << "order_qty = " << order_qty << endl;
//         cout << "limit_price = " << limit_price << endl;
//         cout << "account id = " << account_id << endl;
//         cout << "Account name = " << account_name << endl;
//     }
// };

// int main()
// {

//     strategy obj1;

//     obj1.printdata();
//     return 0;
// }
// ===ACCESS MODIFIER IN THE PROTECT CLASS OF INTERITANCE
#include <Bits/stdc++.h>
using namespace std;
class Base
{
public:
    int qnt;
    int price;
    Base(int doub, int pri)
    {
        qnt = doub;
        price = pri;
    }
    void printBase()
    {
        cout << "printing the qnt" << qnt << endl;
        cout << "printing the price" << price << endl;
    }

private:
    void prinitpriv()
    {
        cout << "Printing something from the private" << endl;
    }

protected:
    void prinitprote()
    {
        cout << "Printing something from the protected" << endl;
        prinitpriv();
    }
};
class strategy : public Base
{
public:
    strategy(int sam, int pri) : Base(sam, pri) {};
    void createstrategy()
    {
        cout << "creating from the child class" << endl;
        printBase();
        prinitprote();
    }
};
int main()
{
    strategy s(10, 10);
    s.createstrategy();

    return 0;
}