#include<iostream>
using namespace std;

int main(){
    int num = -5431;
    bool neg = false;

    if(num<0){
        num = num*-1;
        neg = true;
    }

    int ans = 0;

    while(num>0){

        int dig = num%10;

        ans = ans*10 + dig;

        num = num/10;
    }

    if(neg){
        cout<<ans*-1<<endl;
    }
    else{
        cout<<ans<<endl;
    }
    
    cout<<num<<endl;

    

    return 0;
}