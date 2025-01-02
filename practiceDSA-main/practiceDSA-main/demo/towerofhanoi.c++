#include<bits/stdc++.h>
using namespace std;
void toh(int n , char E, char F, char G ){
    if(n==1){
        cout<<E<<F<<endl;
        return ;
    }
    toh(n-1,E,G,F);
    cout<<n<<E<<F;
    toh(n-1,G,F,E);
}
int main(){
    int n=4;
    toh(n,'A','C','B');
    return 0;
    // cout<<toh<<" ";

}