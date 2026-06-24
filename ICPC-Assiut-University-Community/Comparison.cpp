// Question Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V
#include<iostream>
using namespace std;

int main(){
  int a,b;
  char s;
  cin >> a >> s >> b;
  if(s=='>'){
    if(a>b){
        cout << "Right" << endl;
    }else{
        cout << "Wrong" << endl;
    }

  }else if(s=='<'){
    if(a<b){
        cout << "Right" << endl;
    }else{
        cout << "Wrong" << endl;
    }

  }else{
    if(a==b){
        cout << "Right" << endl;
    }else{
        cout << "Wrong" << endl;
    }

  }
}

