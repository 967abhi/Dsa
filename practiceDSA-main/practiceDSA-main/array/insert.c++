#include<bits/stdc++.h>
using namespace std;
int insertatbegining(int arr[], int n, int x, int pos, int cap ){
    if(n==cap)
        return n;
    
    
    int idx=pos-1;
    // idx=1;

    for(int i=n-1; i>=idx; i--)
      arr[i+1]=arr[i];

      arr[idx]=x;



      return(n+1);
}
int main(){
    
    int arr[]={5,7,10,20 };
    int n=4;
    int x=3;
    int pos=2;
    int cap=sizeof(arr)/sizeof(arr[0]);
    cout<<insertatbegining(arr,n,x,pos,cap);
    return 0;

}