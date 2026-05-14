// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N
#include<iostream>
using namespace std;

int main(){
   char x;
   cin >> x;
   if((int)x >=65 && (int)x <=90){
     cout << (char)((int)x+32) << endl ;
   }else{
     cout << (char)((int)x-32) << endl;
   }
}

