// Question Link : https://codeforces.com/problemset/problem/1475/A

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases;
    cin >> test_cases;
    for(int i=0;i<test_cases;i++){
       long long n;
       cin >> n;
       if(n%2==1){
        cout << "YES" << endl;
       }else if(n==2){
        cout << "NO" << endl;
       }else{
        bool flag=false;
        while(n>2){
            if((n/2) % 2== 1 ){
                cout << "YES" << endl;
                flag=true;
                break;
            }
            n=n/2;
        }
        if(flag==false){
            cout << "NO" << endl;
        }
       }
    }
}