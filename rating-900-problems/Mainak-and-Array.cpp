// Question Link: https://codeforces.com/problemset/problem/1726/A
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
       int ans1=arr[n-1]-arr[0];
       int maxElem=INT_MIN;
       int minElem=INT_MAX;
       int ans4=INT_MIN;
       for(int j=0;j<n;j++){
           maxElem=max(maxElem,arr[j]);
           minElem=min(minElem,arr[j]);
           if(j<n-1){
              ans4=max(ans4,arr[j]-arr[j+1]);
           }
       }
       int ans2=maxElem-arr[0];
       int ans3=arr[n-1]-minElem;

       int res=max(max(max(ans1,ans2),ans3),ans4);
       
       
       cout <<  res << endl;
       
    }

}