// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/N
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int a,b;
    string s;
    cin >> a >> b >> s;
    bool isInPosition=false;
    bool areDigits=true;
    if(s[a]=='-'){
        isInPosition=true;
    }
    for(int i=0;i<s.size();i++){
        if(i != a){
            if(s[i]-'0' < 0 || s[i]-'0' > 9){
                areDigits=false;
            }
        }
    }
    if(isInPosition && areDigits){
        cout << "Yes" << endl; 
    }else{
        cout << "No" << endl; 
    }
}