#include<bits/stdc++.h>
#include<iostream>
using namespace std;

//gcd using euclidian
int gcd(int a, int b){
    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;
}

int main(){
 
 int a=0, b=0;
 cin>>a>>b;
 cout<<gcd(a,b)<<endl;
return 0;
}