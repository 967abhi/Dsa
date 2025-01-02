#include<bits/stdc++.h>
using namespace std;
int witharray(int arr[], int n ){
    for(int i=0; i<n; i++){
        if(arr[i]>arr[i+1])
         return 1;
         else
         return 0;

    }
}
int main(){
    int arr[]={5, 6, 3, 2, 1};
    int n =sizeof(arr)/sizeof(arr[0]);
    cout<<witharray(arr,n);
    return 0;
}