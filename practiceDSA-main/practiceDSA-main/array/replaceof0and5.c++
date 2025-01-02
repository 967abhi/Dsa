#include<bits/stdc++.h>
using namespace std;
int replace(int n ){
   string str = to_string(n);
    for(int i = 0; i < str.length(); i++)
        if(str[i] == '0')
            str[i] = '5';
    return stoi(str);

}
int main(){
    int n =1004;
     cout<<replace(n);
} 
