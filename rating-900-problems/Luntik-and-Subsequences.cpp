// Question Link: https://codeforces.com/problemset/problem/1582/B
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases;
    cin >> test_cases;
    for(int i=0;i<test_cases;i++){
      int n;
      cin >> n;
      long long arr[n];
      for(int j=0;j<n;j++){
        cin >> arr[j];
      }
      long long sum=0;
      long long noOfZeros=0;
      long long noOfOnes=0;
      for(int j=0;j<n;j++){
        sum=sum+arr[j];
        if(arr[j]==0){
            noOfZeros++;
        }
        if(arr[j]==1){
            noOfOnes++;
        }
      }
     
      cout << (long long)(pow(2,noOfZeros)*noOfOnes)<< endl;
     

    }

}