#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "geeksforgeeks";
    cout << str.length() << "size of the string";
    str = str + "xyz";
    cout << str << endl;
    cout << str.substr(1, 3) << " " << endl;
    cout << str.find("eek") << " " << endl;
    return 0;
}