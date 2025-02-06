#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {10, 20, 40, 90};
    v.push_back(25);
    v.push_back(70);
    v.pop_back();
    // vector<int> ans;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
        // ans.push_back(v[i]);
    }

    return 0;
}