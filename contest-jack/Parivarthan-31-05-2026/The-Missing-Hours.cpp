#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
      string s,t;
      cin >> s >> t;
      string sHours="";
      sHours+=s[0];
      sHours+=s[1];

      string sMins="";
      sMins+=s[3];
      sMins+=s[4];
      int totalS=stoi(sHours)*60+stoi(sMins);

      string tHours="";
      tHours+=t[0];
      tHours+=t[1];
      string tMins="";
      tMins+=t[3];
      tMins+=t[4];
      int totalT=stoi(tHours)*60+stoi(tMins);

      int ans=totalS-totalT;
      int ansHours=ans/60;
      int ansMins=ans%60;
      if(ansHours<10 && ansMins<10){
        cout << 0 << ansHours << ":" << 0 << ansMins << endl;
      }else if(ansHours>=10 && ansMins>=10){
        cout << ansHours << ":" << ansMins << endl;
      }else if(ansHours<10 && ansMins>=10){
        cout << 0 << ansHours << ":" << ansMins << endl;
      }else{
        cout << ansHours << ":" << 0 << ansMins << endl;
      }

}