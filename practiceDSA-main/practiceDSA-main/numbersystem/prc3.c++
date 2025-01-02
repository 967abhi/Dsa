#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<" enter the value of n ";
    cin>>n;
    int res=1;
    for(int i=2; i<=n; i++){
        res=res*i;

    }
        cout<<res<<endl;

}