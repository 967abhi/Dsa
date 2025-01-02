// // #include <bits/stdc++.h>
// // using namespace std;
// // class strategy
// // {
// // public:
// //     void printdata(const strategy &obj)
// //     {
// //         cout << "price" << obj.price << endl;
// //         cout << "order" << obj.order << endl;
// //     }
// //     strategy(const double prc, const double ord)
// //     {
// //         price = prc;
// //         order = ord;
// //     }

// // private:
// //     double price;
// //     double order;
// // };
// // int main()
// // {
// //     strategy obj(100, 100);
// //     obj.printdata(obj);
// //     return 0;
// // }
// // =============Delete the default constructor===========
// #include <bits/stdc++.h>
// using namespace std;
// class strategy
// {
// public:
//     double order_qty;
//     double price;
//     strategy(const double order_qt, const double pr)
//     {
//         order_qty = order_qt;
//         price = pr;

//         cout << "order " << order_qt;
//         cout << "price" << price;
//     }

//     // delete the default constructor
//     strategy() = delete;
// };
// int main()
// {
//     // strategy s1;
//     // s1.order_qty;
//     // s1.price;
//     strategy s1(100.5, 250.75);
//     // s1.printquery();
//     // s1.printquery();

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
class strategy
{
private:
    int order_qty;
    double price;
    string user_name;

public:
    strategy(int qt, double pr) : order_qty(qt), price(pr) {};
    // normalizations installtion
    strategy(int qt, double pr, string name)
    {
        order_qty = qt;
        price = pr;
        user_name = name;
    }
    void printdata()
    {
        cout << "quantity data = " << order_qty << endl;
        cout << "price of the card = " << price << endl;
        cout << "username of the card = " << user_name << endl;
    }
};
int main()
{
    strategy obj(10, 100.00, "abhishek");
    obj.printdata();
    strategy obj1(10, 100);
    obj1.printdata();
    return 0;
}