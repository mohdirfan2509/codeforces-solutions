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
       long long start=n-(n%4)+1;
        
       for(long long j=start;j<=n;j++){
         if(x%2==0){
            x=x-j;
          }else{
            x=x+j;
          }
       }
       
       cout << x << endl;
    }
}