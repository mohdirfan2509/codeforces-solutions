// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/U
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    float n;
    cin >> n;
    int a=n;
    if(n-a==0){
        cout << "int" << " " << a;
    }else{
        cout << "float" << " " << a << " " << n-a ;
    }
}

