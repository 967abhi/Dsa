// Print frequencies of character in lower order in a string in a lower case
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "geeksforgeeks";
    int count[26] = {0};
    int n = str.length();
    for (int i = 0; i < n; i++)

    {
        cout << str[i];
        count[str[i] - 'a']++;
        cout << count[str[i] - 'a'] << endl;
    }
    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0)
        {

            cout << char(i + 'a') << " ";
            cout << count[i] << endl;
        }
    }
    return 0;
}