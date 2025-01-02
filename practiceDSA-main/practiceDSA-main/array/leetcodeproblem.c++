// A sentence is a list of words that are separated by a single space with no leading or trailing spaces.

// You are given an array of strings sentences, where each sentences[i] represents a single sentence.

// Return the maximum number of words that appear in a single sentence.

 

// Example 1:

// Input: sentences = ["alice and bob love leetcode", "i think so too", "this is great thanks very much"]
// Output: 6
// Explanation: 
// - The first sentence, "alice and bob love leetcode", has 5 words in total.
// - The second sentence, "i think so too", has 4 words in total.
// - The third sentence, "this is great thanks very much", has 6 words in total.
// Thus, the maximum number of words in a single sentence comes from the third sentence, which has 6 words.
   int count=0;
        int d= INT_MIN; // value of int_min is -2^(8*2), i have taken it so that lower value than this is not possible and therefore can be used to find max in max funtion
        cout<<d<<endl;     // you can check the value of d here

        // for loop
        for(int i=0; i< sentences.size();i++)
        {
            for(int j=0; j<sentences[i].size();j++)
            {
                if(sentences[i][j]==' ') // here if any gap is found in between the words it will count it... so any gap between the words gets counted

                {
                    count++;     //counter
                }
            }

            d=max(count+1,d);   // checks each time if the value of counter in each sentence is greater than the previous value ,,, counter+1 is added because {{ (number of gaps +1)= total words

            count=0;         // resets the value of counter for next iteration
        }
        return d;
        }


        // ====================================================================
        class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n=sentences.size();
        int counter, ans=0;
        for(int i=0;i<n;i++)
        {
            int k=sentences[i].length();
            counter=1;
            for(int j=0;j<k;j++)
            {
                if(sentences[i][j]==' ')
                {
                    counter++;
                }
            }
            ans=max(counter, ans);
        }
        return ans;
    }
};