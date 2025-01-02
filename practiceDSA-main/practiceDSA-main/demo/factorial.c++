#include<bits/stdc++.h>
using namespace std;
int fact(int n ){
    if(n==0){
        return 0;

    }
    int output=fact(n-1);
    return n*output; 
    // cout<<given<<endl;
    // return 0;

}
int main(){
    int n ;
    cout<<" enter the value of n ";
    cin>>n;
    int outpuT= fact(n);
    cout<<outpuT<<" ";

}
// #include<bits/stdc++.h>
// using namespace std;
// int factorial(int n ){
//     cout<<n<<" ";
//     if(n==0){
//         return 1;
//     }
//     int ser=factorial(n-1);
    
//     return n*ser;


// }
// int main(){
//     int n ;
//     cout<<" enter the value of n ";
//     cin>>n;
//     int output=factorial(n);
//      cout<<output<<" ";

// }