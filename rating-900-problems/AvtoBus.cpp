// Question Link: https://codeforces.com/problemset/problem/1679/A

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases;
    cin >> test_cases;
    for(int i=0;i<test_cases;i++){
       long long n;
       cin >> n;
       if(n%2 !=0 || n<4){
          cout << -1 << endl;
       }else{
          cout << (n+5)/6 << " "<< n/4 << endl;;
       }
      
    }

}