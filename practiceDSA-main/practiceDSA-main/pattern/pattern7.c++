#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int space =n/2;
    int st=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=space ; j++){
            cout<<"\t";
        }
        for(int j=1; j<=st;j++){
            cout<<"*\t";
        }
        if(i<=n/2){
            space--;
            st +=2;

        }
        else{
            space++;
            st -=2;
        }
        return 0;
        
    }
}