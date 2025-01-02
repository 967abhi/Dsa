#include <bits/stdc++.h>
using namespace std;
void printvector(vector<pair<int, int>> &v)
{
    cout << "size:" << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    // int a[10];
    // vector<int> v;
    // int n;
    // cin >> n;
    // vector<int> v;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     // printvector(v);
    //     v.push_back(x);
    // }
    // printvector(v);
    // // cout << v.pop_back();
    // v.pop_back();
    // printvector(v);
    vector<pair<int, int>> v = {{1, 2}, {3, 4}, {5, 6}};
}