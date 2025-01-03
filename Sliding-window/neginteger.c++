#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {12, -1, -7, 8, -15, 30, 13, 28};
    int n = 8;
    int sw = 3;
    int i = 0;
    int j = 0;

    vector<int> ans;      // To store results
    deque<int> negatives; // To track negative numbers in the current window

    while (j < n)
    {
        // Add the current element to the deque if it's negative
        if (arr[j] < 0)
        {
            negatives.push_back(arr[j]);
        }

        // Check if the window size is less than sw
        if (j - i + 1 < sw)
        {
            j++;
        }
        else if (j - i + 1 == sw)
        {
            // If there are negative numbers in the deque, the first one is the answer
            if (!negatives.empty())
            {
                ans.push_back(negatives.front());
            }
            else
            {
                ans.push_back(0); // If no negative number, push 0
            }

            // Slide the window
            if (!negatives.empty() && negatives.front() == arr[i])
            {
                negatives.pop_front(); // Remove the element going out of the window
            }
            i++;
            j++;
        }
    }

    // Print the result
    cout << "First negative integer in every window of size " << sw << ": ";
    for (int x : ans)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
