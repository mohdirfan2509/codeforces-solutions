#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases;
    cin >> test_cases;
    for(int i=0;i<test_cases;i++){
      int n;
      string s;
      cin >> n >> s;
      for(int j=0;j<n-2;j++){
        if(s[j]=='1' && s[j+1]=='0' && s[j+2]=='1'){
            s[j+1]='1';
        }
      }
      int maxOnes=0;
      for(int j=0;j<n;j++){
        if(s[j]=='1'){
            maxOnes++;
        }
      }

      for(int j=0;j<n-2;j++){
        if(s[j]=='1' && s[j+1]=='1' && s[j+2]=='1'){
            s[j+1]='0';
        }
      }

      int minOnes=0;
      for(int j=0;j<n;j++){
        if(s[j]=='1'){
            minOnes++;
        }
      }

      cout << minOnes << " " << maxOnes << endl;
      




    }

}