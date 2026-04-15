// Question Link: https://codeforces.com/problemset/problem/1666/D

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases;
    cin >> test_cases;
    for(int i=0;i<test_cases;i++){
         string s,t;
         cin >> s >> t;
         int n=s.size();
         int m=t.size();
         vector<int> freq(26,0);
         for(int j=0;j<m;j++){
              freq[t[j]-'A']++;
         }
         for(int j=n-1;j>=0;j--){
              if(freq[s[j]-'A']>0){
                  freq[s[j]-'A']--;
              }else{
                s[j]='.';
              }
         }
         string last="";
         for(int j=0;j<n;j++){
              if(s[j] !='.'){
                last+=s[j];
              }
         }
         if(last==t){
            cout << "YES" << endl;
         }else{
            cout << "NO" << endl;
         }
       
    }

}