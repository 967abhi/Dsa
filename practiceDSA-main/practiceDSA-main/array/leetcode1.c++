#include<bits/stdc++.h>
using namespace std;
int sumofarray(int arr[], int n ){
        int sum=0;
    for(int i=0; i<n; i++){
        sum=sum+arr[i];
        arr[i]=sum;
    }
}
int main(){
    int n ;
    cout<<" enter the size of array";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<sumofarray(arr,n);
    return 0;
}