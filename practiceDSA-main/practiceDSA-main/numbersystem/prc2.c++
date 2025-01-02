//  count digit 
#include<iostream>
using namespace std;
int countDigit(int n ){
    int count =0;
   for(int i=0; i<n; i++){
    n=n/10;
    count++;
   }
    return count;

}
int main(){
    int n ;
    cout<<" enter the value of n ";
    cin>>n;
    cout<<countDigit(n);
    return 0;
}