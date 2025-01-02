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
    int data ;
    cout<<" enter the value of data ";
    cin>>data;
    int idx=-1;
    for(int i=0; i<n; i++){
        if(arr[i]==data){
            idx=i;
            break;
        }
    }

    cout<<idx<<endl;
    return 0;
    
    }