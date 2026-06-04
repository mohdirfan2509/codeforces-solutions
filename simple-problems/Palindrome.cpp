// Question Link:https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/I
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s=to_string(n);
    string rev="";
    for(int i=s.size()-1;i>=0;i--){
        rev+=s[i];
    }
    int idx=0;
    string temp="";
    while(rev[idx]=='0'){
        idx++;
    }
    for(int i=idx;i<s.size();i++){
        temp+=rev[i];
    }
    cout << temp << endl;
    if(temp==s){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

  
  
}

