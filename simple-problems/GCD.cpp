// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/L
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    int x=min(a,b);
    int y=max(a,b);
    int gcd=INT_MIN;
    for(int i=1;i<=x;i++){
        if(x%i==0 && y%i==0){
            gcd=max(gcd,i);
        }
    }
    cout << gcd << endl;
}

