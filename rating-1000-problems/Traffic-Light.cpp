// Question Link: https://codeforces.com/problemset/problem/1744/C
#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++) {
        int n;
        char c;
        string s;
        cin >> n >> c >> s;
        if(c=='g'){
            cout << 0 << endl;
            continue;
        }
        s += s;
        int nextGreen=-1;
        int ans=0;
        for(int j=2*n-1;j>=0;j--){
            if(s[j]=='g'){
                nextGreen=j;
            }
            if(j<n && s[j]==c){
                ans=max(ans,nextGreen-j);
            }
        }
        cout << ans << endl;
       
    }
}