// Question Link : https://codeforces.com/problemset/problem/1374/B

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases;
    cin >> test_cases;
    for(int i=0;i<test_cases;i++){
       long long n;
       cin >> n ;
       bool flag=true;
       long long moves=0;
       if(n>6 && n%6 !=0 && n%3!=0){
          cout << -1 << endl;
       }else if(n==1){
          cout << 0 << endl;
       }else{
          while(n>1){
            if(n%6==0){
                n=n/6;
                moves++;
            }else{
                if(n%3==0){
                    n=n*2;
                    moves++;
                }else{
                    cout << -1 << endl;
                    flag=false;
                    break;
                }
            }
          } 
          if(flag){
            cout << moves << endl;
          }
       }
    }
}