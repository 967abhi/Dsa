#include<bits/stdc++.h>
using namespace std;
int seri(int n ){
    if(n==0){
        return 0;

    }
    cout<<n;
    seri(n-1);
    
}
int main(){
    int n ;
    cout<<" enter the number of n ";
    cin>>n;
    int output=seri(n);
    // cout<<output<<" ";

}