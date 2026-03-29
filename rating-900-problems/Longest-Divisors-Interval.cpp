// Question Link : https://codeforces.com/problemset/problem/1855/B
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases;
    cin >> test_cases;
    for(int i=0;i<test_cases;i++){
        long long n;
        cin >> n;
        int j=1;
        while(n%j==0){
            j++;
        }
        cout << j-1 << "\n";
    }
}