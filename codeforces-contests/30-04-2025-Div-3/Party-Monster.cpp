#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases;
    cin >> test_cases;
    for(int i=0;i<test_cases;i++){
      int n;
      string s;
      cin >> n;
      cin >> s;
      int countOfleft=0;
      int countOfright=0;
      for(int j=0;j<n;j++){
        if(s[j]=='('){
            countOfleft++;
        }
         if(s[j]==')'){
            countOfright++;
        }
      }
      if(countOfleft==countOfright){
        cout << "YES" << endl;
      }else{
        cout << "NO" << endl;
      }

    }
}