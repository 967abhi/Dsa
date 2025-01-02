#include<bits/stdc++.h>
using namespace std;
int countofarray(int arr[], int n ,int ele){
    int count=0;
    for(int i=0; i<n; i++){
        if(arr[i]==ele){
            count++;
        }
    }
        return count;
}
int main(){
    int n =7;
    int arr[n]={2,4,10,10,10,18,20};
    int ele=10;
    cout<<countofarray(arr,n,ele);
    return 0;

}