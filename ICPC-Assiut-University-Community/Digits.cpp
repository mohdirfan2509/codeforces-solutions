// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Q
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases;
    cin >> test_cases;
    for(int i=0;i<test_cases;i++){
      int n;
      cin >> n;

      if(n==0){
        cout << 0 << endl;
      }else{
        
        while(n>0){
          cout << n%10 << " " ;
          n=n/10;
        }
        cout << endl;
        }
    }

}