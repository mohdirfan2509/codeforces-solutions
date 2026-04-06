
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases;
    cin >> test_cases;
    for(int i=0;i<test_cases;i++){
        int n,k;
        cin >> n >> k ;
        for(int j=1;j<=k;j++){
            cout << 1;
        }  
        for(int j=1;j<=n-k;j++){
            cout << 0;
        }       
        cout << endl;
    }
}