#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cout<<" enter the value of n ";
    cin>>n;
    int star=n/2+1;
    int space =1;
    for(int i=0; i<=n; i++){
        for(int j=1; j<=star;j++){
            cout<<"*\t";
        }
        for(int j=1; j<=space; j++){
            cout<<" \t";
        }
        for(int j=1; j<=star;j++){
            cout<<"*\t";
        }
        if(i<=n/2){
            space +=2;
            star--;
        }
        else{
            star++;
            space-=2;
        }
        cout<<endl;
    }
    return 0;

}