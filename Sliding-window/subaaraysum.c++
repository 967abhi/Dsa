#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {2, 5, 1, 8, 2, 9, 1};
    int k = 3;
    int size = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int end = 0;
    int sum = 0;
    // int maxsum = 0;
    int maxsum = INT_MIN;
    while (end < size)
    {
        sum = sum + arr[end];
        if (end - start + 1 < k)
        {
            end++;
        }
        else if (end - start + 1 == k)
        {
            maxsum = max(maxsum, sum);
            sum = sum - arr[start];
            end++;
            start++;
        }
    }
    cout << maxsum;
    return 0;
}