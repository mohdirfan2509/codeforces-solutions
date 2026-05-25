// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Y
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
   long long a,b,c,d;
   cin >> a >> b >> c >> d;
   long long ans=((a%100)*(b%100))%100;
   ans=(ans*(c%100))%100;   
   ans=(ans*(d%100))%100;

   if(ans <10){
    cout << 0;
   }
   
   cout << ans << endl;
   
  
}

