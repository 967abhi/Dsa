// // #include <bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// //     string str;
// //     cout << "Enter the string";
// //     // cin >> str;
// //     cin >> str;
// //     for (int i = 0; i < str.length(); i++)
// //     {
// //         cout << str[i];
// //     }
// //     return 0;
// // }

// #include <bits/stdc++.h>
// using namespace std;
// bool palindrome(string str)
// {
//     string rev = str;
//     reverse(rev.begin(), rev.end());
//     if (rev == str)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }
// int main()
// {
//     string str;
//     cin >> str;
//     cout << palindrome(str);

//     return 0;
// }
// =====================================
#include <bits/stdc++.h>
using namespace std;
bool ispalindrome(string str)
{
    int begin = 0;
    int end = str.length() - 1;
    while (begin < end)
    {
        if (str[begin] != str[end])
        {
            return false;
            begin++;
            end--;
        }
    }
    return true;
}
int main()
{
    string str;
    cin >> str;
    // cout << ispalindrome(str);
    if (ispalindrome(str))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    return 0;
}