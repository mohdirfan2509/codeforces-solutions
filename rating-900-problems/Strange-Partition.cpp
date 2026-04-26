// Question Link : https://codeforces.com/problemset/problem/1471/A
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int test_cases;
    cin >> test_cases;
    for(int i=0;i<test_cases;i++){
      int n,x;
      cin >> n >> x;
      int arr[n];
      for(int j=0;j<n;j++){
        cin >> arr[j];
      }
      long long minBeauty=0;
      long long maxBeauty=0;
      for(long long j=0;j<n;j++){
        maxBeauty=maxBeauty+ceil(arr[j]*1.0/x);
        minBeauty=minBeauty+arr[j];
      }
      long long ans1=ceil(minBeauty*1.0/x);
      cout << ans1 << " " << maxBeauty << endl;
    }
}