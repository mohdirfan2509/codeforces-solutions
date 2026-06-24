// Question Link:https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
   int n;
   cin >> n;
   int arr[n];
   for(int i=0;i<n;i++){
    cin >> arr[i];
   }
   int maxNum=INT_MIN;
   for(int i=0;i<n;i++){
    if(arr[i]>maxNum){
        maxNum=max(maxNum,arr[i]);
    }
   }
   cout << maxNum << endl;
}

