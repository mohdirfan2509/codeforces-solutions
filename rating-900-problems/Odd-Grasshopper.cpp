// Question Link : https://codeforces.com/problemset/problem/1607/B

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases;
    cin >> test_cases;
    for(int i=0;i<test_cases;i++){
       long long x,n;
       cin >> x >> n;
       long long k=n%4;

       if(k==0){
        cout << x << endl;
       }else if(k==1){
        if(abs(x)%2==0){
            cout << x-n << endl;
        }else{
            cout << x+n << endl;
        }
       }else if(k==2){
        if(abs(x)%2==0){
            cout << x+1 << endl;
        }else{
            cout << x-1 << endl;
        }
       }else if(k==3){
        if(abs(x)%2==0){
            cout << x+1+n << endl;
        }else{
            cout << x-1-n << endl;
        }
       }
    }
}