#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cout<<" enter the value of n ";
    cin>>n;

    int space =0;
    int star=n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=space; j++){
            cout<<"\t";
        }
        for(int j=1; j<=star; j++){
            cout<<"*\t";
        }
        star--;
        space++;
        cout<<endl;
    }
    return 0;


}