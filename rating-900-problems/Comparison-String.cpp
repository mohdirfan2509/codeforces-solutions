// Question Link: https://codeforces.com/problemset/problem/1837/B

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases;
    cin >> test_cases;
    for(int i=0;i<test_cases;i++){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cur=1,ans=1;
        for(int j=1;j<n;j++){
            if(s[j] != s[j-1]){
                cur=1;
            }else{
                cur++;
            }
            ans=max(ans,cur);
        }
        cout << ans+1 << endl;
       
    }

}