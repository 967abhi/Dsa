#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cout<<" enter the value of n ";
    cin>>n;
    int space = n-1;
    int star=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=space;j++){
            cout<<"\t";
        }
        for(int j=1; j<=star; j++){
            cout<<"*";
        }
        space--;
        star++;
        cout<<endl;
    }
    return 0;
    
}