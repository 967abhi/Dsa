#include<bits/stdc++.h>
using namespace std;
int multiply(int arr[], int n ){
    int k=0,l=0;
    for(int i=0; i<n/2; i++){
        k=k+arr[i];
        return k;
    }
    for(int i=n/2; i<n; i++){
        l=l+arr[i];
        return l;
    }
    return k*l;


}
int main(){
    int arr[]=  {1, 2, 3, 4};
    int n =sizeof(arr)/sizeof(arr[0]);
    cout<<multiply(arr,n );
    return 0;

}