// Travling zeros 
//This solution is navie method the time complexity of this solution is O(n)..


// #include<bits/stdc++.h>
// using namespace std;
// int countZeros(int n){
//     int fact=1;
//     for(int i=2; i<=n; i++){
//         fact=fact*i;
//     }
//     int res=0;
//     while(fact%10==0){
//         res++;
//         fact=fact/10;
//     }
//     return res;

// }
// int main()
// {
//     int n;
//     cout<<" enter the value of n ";
//      cin>>n;
//      cout<<countZeros(n)<<endl;
//      return 0;

    
// } 



//=====================This is efficient method of solving this solution======
// This is the best solution of this question in this method the time complexity are :- O(logn );


#include<bits/stdc++.h>
using namespace std;
int countTravlingZeros(int n ){
    int res=0;
    for(int i=5; i<=n; i=i*5){
        res=res+n/i;
        
    }
    return res; 
}
int main(){
    int n;
    cout<<" enter the value of n ";
    cin>>n;
    cout<<countTravlingZeros(n);
    return 0;

}