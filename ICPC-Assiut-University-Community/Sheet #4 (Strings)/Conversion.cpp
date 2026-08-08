// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/G
#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    for(int i=0;i<s.size();i++){
        if(s[i]==','){
            s[i]=' ';
        }else if(s[i]>='a' && s[i]<='z'){
            s[i]=(char)(s[i]-32);

        }else{
            s[i]=(char)(s[i]+32);

        }
    }
    cout << s << endl;
}