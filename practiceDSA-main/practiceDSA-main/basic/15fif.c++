#include<bits/stdc++.h>
using namespace std;
int main(){
    int x=10,y=20;
    bool res=(x>0&&x<100);
    cout<<res;
    res=(x>0||x>y);
    cout<<res<<"\n";
    res=!res;
    cout<<res<<endl;
    return 0;

}