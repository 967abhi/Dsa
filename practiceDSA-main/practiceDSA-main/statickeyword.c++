// // ========static variable inside the function ===================
// #include <bits/stdc++.h>
// using namespace std;
// void fun()
// {
//     static int x = 0;
//     cout << "The value of the x " << x << endl;

//     x = x + 1;
// }
// int main()
// {
//     fun();
//     fun();
//     fun();
//     fun();
//     fun();

//     return 0;
// }
// ===============Static member varible or static member function inside a class===========
#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int rollnumber;
    string schoolname;
    void printInfo()
    {
        cout << rollnumber << endl;
        cout << schoolname << endl;
    }
    void schoolname1()
    {
        cout << schoolname;
    }
};
int main()

{
    Student s1;
    s1.rollnumber = 12;
    s1.schoolname = "st.joseph's high school";
    s1.printInfo();
    s1.schoolname1();

    return 0;
}