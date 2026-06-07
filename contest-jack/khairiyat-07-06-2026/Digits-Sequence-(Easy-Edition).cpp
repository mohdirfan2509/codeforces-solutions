#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    int x=1;
    while(s.size()<n){
        s+=to_string(x);
        x++;
    }    
    cout << s[n-1] << endl;
}