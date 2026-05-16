// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x ;
    string digits=to_string(x);
    if((int)(digits[0]) %2==0){
        cout << "EVEN" << endl;
    }else{
        cout << "ODD" << endl;
    }

  
}

