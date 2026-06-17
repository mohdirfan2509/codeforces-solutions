// Question Link:https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/R
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,m;
    cin >> n >> m;
    while(n>0 && m>0){
        long long small=min(n,m);
        long long big=max(n,m);
        long long  sum=0;
        for(long long i=small;i<=big;i++){
            sum=sum+i;
            cout << i << " ";
        }
        cout << "sum =" << sum << endl;

        cin >> n >> m;

    }
}

