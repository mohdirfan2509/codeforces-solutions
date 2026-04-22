// Question Link : https://codeforces.com/problemset/problem/1543/A

#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){

    int test_cases;
    cin >> test_cases;
    for(int i=0;i<test_cases;i++){
        long long a,b;
        cin >> a >> b;
        if(a==b){
            cout << 0 << " "<< 0 << endl;
        }else{
            long long g= abs(a-b);
            long long moves=min(a%g, g-(a%g));
            cout << g << " " << moves << endl;
        }
    }
}