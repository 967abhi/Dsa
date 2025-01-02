// check for sum 
// #include<bits/stdc++.h>
// using namespace std;
//  bool isprime(int n){
//     if(n==1)
//     return false;
//     for(int i=2; i<n; i++){
//         if(n%i==0)
//         return false;

//     }
//     return true;
//  }
// int main(){
//     int n ;
//     cout<<" enter the number of n";
//     cin>>n;
//     cout<<isprime(n)<<endl;
//     return 0;

// }


// ===========Efficient method===
// #include<bits/stdc++.h>
// using namespace std;
// bool isprime(int n ){
//     if(n==1)
//     return false;

//     for(int i=2; i*i<=n; i++){
//         if(n%i==0)
//         return false;
//     }
//     return true;
// }
// int main(){
//     int n ;
//     cout<<" enter the value of n ";
//     cin>>n;
//     cout<<isprime(n)<<endl;
//     return 0;
// }


// =========Moe Efficent method ==
#include<bits/stdc++.h>
using namespace std;
bool isprime(int n ){
    if(n==1)
    return false;
    if(n==2||n==3)
    return true;
    if(n%2==0||n%3==0){
        return false;
    }
    for(int i=5;i*i<=n; i=i+6)
    if(n%i==0||n%(i+2)==0)
    return false;

    return true;
}
int main(){
    int n ;
    cout<<" enter the value of n ";
    cin>>n;
    cout<<isprime(n)<<endl;
    return 0;

}