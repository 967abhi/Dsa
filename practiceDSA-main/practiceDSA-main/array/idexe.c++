#include<bits/stdc++.h>
using namespace std;
int toindex(int arr[], int n ){
    for(int i=0; i<=n; i++){
        if(arr[i]==i+1){
            return arr[i];
        }

    }
        return -1;

}
int main(){
    int arr[]={15,2,45,12,7};
    int n =sizeof(arr)/sizeof(arr[0]);
    int c = toindex(arr,n);
    cout<<c<<endl;
    return 0;

}