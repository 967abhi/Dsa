// this program is only for increasing order it does not work for decreasing order
#include<bits/stdc++.h>
using namespace std;
bool issorted(int arr[], int n ){
    for(int i=0;i<n; i++)
    for(int j=i+1; j<n; j++)
    if(arr[j]<arr[i])
      return false;

  return true;
  

}
int main(){
    int arr[]={8,12,15};
    cout<<issorted(arr,4);
    return 0;
}