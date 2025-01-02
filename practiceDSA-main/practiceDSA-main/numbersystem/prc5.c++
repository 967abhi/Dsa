// greatest common divisior isme kya hota hai hum do input lete hai aur uska divide krte hai jo number un dono number ko divide krta hai higher term me usi ko hum log answer bol dete hai \
// ================================
#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    int res=min(a,b);
    while(res>0){
        if(a%res==0&&b%res==0){
            break;
        }
        res--;

    }
    return res;

}
int main(){
    int a,b;
    cout<<" enter the value of a and b ";
    cin>>a>>b;
    cout<<gcd(a,b);
    return 0;

}


// This solution is done by eculidean algorithm in this algorithm we do nothing we do only the b value and the value b is subtract from a suppose the value of a is greater then we do only a=a-b; otherwise b=b-a; know going to write the code of algorithm .


#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    while(a!=b){
        if(a>b)
        a=a-b;
        else
        b=b-a;
    }
    return a; 
}
int main(){
    int a,b;
    cout<<" enter the value of the a and b ";
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
    return 0;
}




// ======the optmized way to write this code are 
#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b ){
    if(b==0){
        return a;
    }
    else{
        return gcd(b,a%b);
    }
}
int main(){
    int a,b;
    cout<<" enter the value of a and b ";
    cin>>a>>b;
    cout<<gcd(a,b);
    return 0;

}