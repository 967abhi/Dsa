#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cout<<" enter the value of n ";
    cin>>n;
    int os=n/2;
    int is=-1;

    for(int i=0; i<n; i++){
        for(int j=1; j<=os; j++){
            cout<<"\t";
        }
        cout<<"*\t";
        for(int j=1; j<=is;j++){
            cout<<"\t";
        }
        if(i>1 && i<n){
            cout<<"*\t";
        }
        if(i<=n/2){
            os--;
            is+=2;
        }
        else{
            os++;
            is-=2;

        }
        cout<<endl;
    }
    return 0;

}