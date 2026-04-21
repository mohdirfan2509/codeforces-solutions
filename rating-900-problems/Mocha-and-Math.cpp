// Question Link: https://codeforces.com/problemset/problem/1559/A
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
      int ans=arr[0];
      for(int j=1;j<n;j++){
        ans=ans & arr[j];
      }
      cout << ans << endl;
    }

}