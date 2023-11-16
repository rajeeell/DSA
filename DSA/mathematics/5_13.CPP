#include<bits/stdc++.h>
#include<iostream>
using namespace std;

//euclidian more efficient approach

int gcd(int a, int b){
    if(b==0){
        return a;
    }

    else{
        return gcd(b,a%b);
    }
}

int main(){
int a=0, b=0;
 cin>>a>>b;
 cout<<gcd(a,b)<<endl;
return 0;
}