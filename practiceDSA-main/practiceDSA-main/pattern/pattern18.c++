#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cout<<" enter the number of n ";
    cin>>n;
    int star=1;
    int space = 2*n-3;
    for(int i=1; i<=n; i++){
        int val=1;
        for(int j=1; j<=star; j++){
            cout<<val+" ";
            val++;

        }
        for(int j=1; j<=space ; j++){
            cout<<"\t";
        }
        if(i==n){
            star--;
        }
        for(int j=1; j<=star; j++){
            cout<<val+" ";
            val--; 
        }
        star++;
        space-=2;
        cout<<endl;
    }
    return 0;


}