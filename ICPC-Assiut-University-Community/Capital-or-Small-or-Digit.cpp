// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M
#include<iostream>
using namespace std;

int main(){
   char x;
   cin >> x;
   if((int)x >=48 && (int)x <=57){
     cout << "IS DIGIT" << endl;
   }else if((int)x >=65 && (int)x <=90){
     cout << "ALPHA" << endl << "IS CAPITAL" << endl;
   }else{
     cout << "ALPHA" << endl << "IS SMALL" << endl;
   }
}

