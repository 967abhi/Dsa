#include<bitstc++.h>
using namespace std;
int main(){
    int x=5;
    boll res=(x==4)&&(x++);
    cout<<res<<" "<<x;
    return 0;
    
}