// Question Link: https://codeforces.com/problemset/problem/1849/B
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool compare(pair<long long, int> a, pair<long long, int> b){
    if(a.first==b.first){
        return a.second < b.second; 
    }
    return a.first > b.first;
}

int main(){
    int test_cases;
    cin >> test_cases;
    for(int i=0;i<test_cases;i++){
       int n,k;
       cin >> n >> k ;
       vector<pair<long long, int>> monsters;
       for(int j=0;j<n;j++){
         long long a;
         cin >> a;
         long long rem= a%k;
         if(rem==0) rem=k;
         monsters.push_back({rem,j+1});
       }
       sort(monsters.begin(),monsters.end(),compare);
       for(auto &p:monsters){
        cout << p.second << " ";
       }
       cout << endl;
       
    }

}