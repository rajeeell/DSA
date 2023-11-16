#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int countDigits(int x){
    int count=0;
    while(x>0){
        x=x/10;
        count++;
    }
    return count;
}

int main(){

int x;

cin>>x;

cout<<countDigits(x);

return 0;
}