// Problem Link : https://codeforces.com/group/zOa9U7TcXb/contest/683930/problem/Parvez

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases;
    cin >> test_cases;
    for(int i=0;i<test_cases;i++){
        int l1,b1,l2,b2,l3,b3;
        cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;
        if(l1 ==l2 && l2==l3 && b1+b2+b3==l1){
            cout << "YES" << endl;
        }else if(b1==b2 && b2==b3 && l1+l2+l3==b1){
            cout << "YES" << endl;
        }else if(b1==b2+b3 && l2==l3 && l1+l2==b1){
            cout << "YES" << endl;
        }else if(l1==l2+l3 && b2==b3 && b1+b3==l1){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}