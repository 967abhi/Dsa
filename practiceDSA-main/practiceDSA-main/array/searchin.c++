#include<bits/stdc++.h>
using namespace std;
int search(int arr[], int n ,int x){
    for(int i=0; i<n; i++)
    if(arr[i]==x){
        return i;
    }
    return -1;
}
int main(){
    int arr[]={10,15,2,1};
    int x=1;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<search(arr,n,x);
    return 0;

    }