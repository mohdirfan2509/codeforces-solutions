// Question Link : https://codeforces.com/problemset/problem/1440/B
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int test_cases;
    cin >> test_cases;
    for(int i=0;i<test_cases;i++){
      long long n,k;
      cin >> n >> k;
      int arr [n*k];
      for(int j=0;j<n*k;j++){
        cin >> arr[j];
      }
      long long median=0;
      long long start=n*k-1-(n/2);
      long long end=n*k -((n/2)+1)*k;
      for(long long j=start;j>=end;j-=(n/2)+1){
        median=median+arr[j];
      }
      cout << median << endl;


    }
}