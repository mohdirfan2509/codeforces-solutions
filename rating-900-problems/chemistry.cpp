// Question Link: https://codeforces.com/problemset/problem/1883/B

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases;
    cin >> test_cases;
    for(int i=0;i<test_cases;i++){
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        unordered_map<char,int> um;
        for(int j=0;j<n;j++){
            um[s[j]]++;
        }
        int oddElem=0;
        for(auto x:um){
            if(x.second % 2==1){
                oddElem++;
            }
        }
        if(k>=oddElem-1){
            cout << "YES" << "\n";
        }else{
            cout << "NO" << "\n";
        }

    }

}