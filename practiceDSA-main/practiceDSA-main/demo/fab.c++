#include<bits/stdc++.h>
using namespace std;
int fab(int n ){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int s1=fab(n-1);
    int s2=fab(n-2);
    return s1+s2;

}
int main(){
    int n ;
    cout<<" enter the value of n ";
    cin>>n;
    int output=fab(n);
    cout<<fab(n)<<" ";

}