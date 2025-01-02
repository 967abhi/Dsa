#include<bits/stdc++.h>
using namespace std;
int findbinary(int arr[], int n , int ele){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(ele==arr[mid]){
            return mid;
        }
        else if(ele<=arr[mid]){
            high=mid-1;
        }
        else{
            low=mid+1;

        }
    }
    return -1; 
}
int main(){
    int n =10;
    int arr[n]={1,2,3,4,5,6,7,8,9,10};
    int ele=2;
    cout<<findbinary(arr,n,ele);
    return 0;

}