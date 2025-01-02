#include<bits/stdc++.h>
using namespace std;
long long mental(long long a[], long long b[], long long n ){
    long long sub,sum=0;
    for(int i=0; i<n; i++){
        sum=sum+a[i];
    }
    for(int j=0; j<n; j++){
        sub=sub+b[j];

    }
    if(sum>sub){
        return sum;
    }
    else{
        return sub;

    }
}
int main(){
    long long  a[]={2, 1, 4};
    long long  b[]={3, 2, 1};
    long long  n=3;
    cout<<mental(a,b,n);
    return 0;

}