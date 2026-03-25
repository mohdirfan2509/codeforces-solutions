// Question Link :https://codeforces.com/problemset/problem/1878/C

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int test_cases;
    cin >> test_cases;
    for(int i=0;i<test_cases;i++){
        long long n,k,x;
        cin >> n >> k >> x;
       
        if(2*x>= k*(k+1) && 2*x <= n*(n+1)-(n-k)*(n-k+1)){
            cout << "YES" << "\n";
        }else{
            cout << "NO" << "\n";
        }

    }
}