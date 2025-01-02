#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cout<<" enter the number n ";
    cin>>n;
    int a=0;
    int b=1;
    for(int i=0; i<=n; i++){
        for(int j=1; j<=i;j++){
            cout<<a;
            int c=a+b;
            a=b;
            b=c;
        }
        cout<<endl;
    }
    return 0;
    
}