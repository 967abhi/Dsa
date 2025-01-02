#include<iostream>
using namespace std;
void bit(int n , int k ){
    if(((n>>(k-1))&1)==1){
        cout<<" yes";

    }
    else{
        cout<<"NO"; 

    }
}
int main(){
    int n , k;
    cout<<" enter the value of n and k ";
    cin>>n>>k;
    cout<<bit (n , k);
    return 0;

}