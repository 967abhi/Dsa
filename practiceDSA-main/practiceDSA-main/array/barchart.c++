#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cout<<" enter the value of n ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];

    }
    int max=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>=max){

        max=arr[i];
        }


    }

    for(int floor=max; floor>=1; floor--){
        for(int i=0; i<n; i++){
            if(arr[i]>=floor){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0; 
}