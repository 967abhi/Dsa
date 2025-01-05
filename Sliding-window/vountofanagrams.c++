//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    int search(string &pat, string &txt)
    {
        unordered_map<char, int> patMap;
        int k = pat.size(); // Length of the pattern
        int count = 0;      // Count of anagrams
        int i = 0, j = 0;   // Sliding window pointers

        // Populate the map with the frequency of characters in the pattern
        for (char ch : pat)
        {
            patMap[ch]++;
        }

        int matchCount = patMap.size(); // Number of unique characters in the pattern map

        // Sliding window
        while (j < txt.size())
        {
            // Decrease the frequency of the current character in the map
            if (patMap.find(txt[j]) != patMap.end())
            {
                patMap[txt[j]]--;
                if (patMap[txt[j]] == 0)
                {
                    matchCount--; // If frequency becomes zero, reduce match count
                }
            }

            // Check if window size matches the size of the pattern
            if (j - i + 1 < k)
            {
                j++;
            }
            else if (j - i + 1 == k)
            {
                // If matchCount is zero, it means an anagram is found
                if (matchCount == 0)
                {
                    count++;
                }

                // Slide the window
                if (patMap.find(txt[i]) != patMap.end())
                {
                    patMap[txt[i]]++;
                    if (patMap[txt[i]] == 1)
                    {
                        matchCount++; // If frequency becomes non-zero, increase match count
                    }
                }
                i++;
                j++;
            }
        }

        return count;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends