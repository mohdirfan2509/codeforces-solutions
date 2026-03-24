// Question Link : https://codeforces.com/problemset/problem/1904/A

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int test_cases;
    cin >> test_cases;
    for(int i=0;i<test_cases;i++){
        int a,b,xk,yk,xq,yq;

        cin >> a >> b >> xk >> yk >> xq >> yq;

        set<pair<int,int>> moves={
            {a,b},{-a,-b},{-a,b},{a,-b},
            {b,a},{-b,-a},{-b,a},{b,-a}
        };

        set<pair<int,int>> kingSet;
        for(auto [dx,dy]:moves){
            kingSet.insert({xk+dx,yk+dy});
        }
        int count=0;
        for(auto [dx,dy]:moves){
            pair<int,int> pos={xq+dx,yq+dy};
            if(kingSet.count(pos)){
                count++;
            }
        }

        cout << count << "\n";
    }
}