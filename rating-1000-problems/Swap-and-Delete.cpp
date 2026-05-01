// Question Link: https://codeforces.com/problemset/problem/1913/B
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases;
    cin >> test_cases;
    for(int i=0;i<test_cases;i++){
     string s;
     cin >> s;
     int zeros=0;
     int ones=0;
     for(int j=0;j<s.size();j++){
        if(s[j]=='0'){
            zeros++;
        }else{
            ones++;

        }
     }
     int lenOf_t=0;
     for(int j=0;j<s.size();j++){
           
         if(s[j]=='0' && ones>0){
             ones--;
             lenOf_t++;
          }else if(s[j]=='1' && zeros>0){
              zeros--;
              lenOf_t++;
          }else{
              break;;
          }  
     } 
     cout << s.size()-lenOf_t << endl;
    }

}