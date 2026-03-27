#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int test_cases;
    cin >> test_cases;
    for(int i=0;i<test_cases;i++){
      int n,m,l,r;
      cin >> n >> m >> l >> r;
      int p1=0,p2=0;
      while(m>0){
        if(p2<r){
            p2++;
            m--;
        }else{
            p1--;
            m--;
        }
      }
      cout << p1 << " " << p2 << "\n";
    }
}