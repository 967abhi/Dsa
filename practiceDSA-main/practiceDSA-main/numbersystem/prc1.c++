// binary to decimal 
#include<bits/stdc++.h>
using namespace std;
int getvlaueInBase(int n , int b){
    int rv=0;
    int p=1;
    while(n>0){
        int dig=n%b;
        n=n/b;
        rv+=dig*p;
        p=p*10;


    }
    return rv;

}
int main(){
       int n ;
       cin>>n; 
       int b;
       cin>>b;
       int dn=getvlaueInBase(n,b);
       cout<<dn;
}

