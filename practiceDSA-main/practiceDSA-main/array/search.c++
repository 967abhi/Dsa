#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[], int n , int k ){
      for(int i=0; i<n; i++){
        if(arr[i]>=k){
            return i;
        }
        else{
            return -1;

        }
      }
}
int main(){
    int n ;
    cout<<" enter the size of array ";
    cin>>n;
    int arr[n];
    int k;
    cout<<" enter the value of k";
    cin>>k;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

cout<<binarysearch( arr,  n , k);
}