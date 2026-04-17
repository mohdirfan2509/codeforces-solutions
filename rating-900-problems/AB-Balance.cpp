// Question Link: https://codeforces.com/problemset/problem/1606/A  

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases;
    cin >> test_cases;
    for(int i=0;i<test_cases;i++){
      string s;
      cin >> s;
      int n=s.size();
      if(s[0]!=s[n-1]){
        if(s[0]=='a'){
            s[0]='b';
        }else{
            s[0]='a';
        }
      }
      cout << s << endl;
      
    }

}