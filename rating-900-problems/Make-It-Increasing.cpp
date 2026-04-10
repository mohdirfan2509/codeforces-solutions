// Question Link: https://codeforces.com/problemset/problem/1675/B
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases;
    cin >> test_cases;
    for(int i=0;i<test_cases;i++){
       int n;
       cin >> n;
       int arr[n];
       for(int j=0;j<n;j++){
           cin >> arr[j];
       }
       if(n==1){
          cout << 0 <<endl;
       }else{
        int ans=0;
        bool possible=true;
         for(int j=n-1;j>=1;j--){
              while(arr[j]<=arr[j-1]){
                  if(arr[j-1]==0){
                    possible=false;
                    break;
                  }
                  arr[j-1]=arr[j-1]/2;
                  ans++;
              }
              if(!possible) break;
         }
         if(possible){
            cout << ans << endl;
         }else{
            cout << -1 << endl;
         }
       }
    }

}