#include<typeinfo>
#include<bits/stdc++.h>
using namespace std;
int main(){
    auto a=10;
    auto b=15.5;
    cout<<a<<"\n"<<b;
    cout<<typeid(a).name()<<"\n"<<typeid(b).name();
    return 0;
    
}