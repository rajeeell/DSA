#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int lcm(int a, int b){
    int res=max(a,b);
    while(true){
        if( res%a ==0 && res%b==0){
            return res;
        }
        res++;
    }
    return res;
}

int main(){
    int a=0, b=0;
    cin>>a>>b;
    cout<<lcm(a,b)<<endl;
return 0;
}