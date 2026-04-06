#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases;
    cin >> test_cases;
    for(int i=0;i<test_cases;i++){
        string s;
        cin >> s;
        unordered_map<char,int> um;
        for(char x:s){
            um[x]++;
        }
        if(s.contains("FFT") || s.contains("NTT")){

            if(um.find('T') != um.end()){
                for(int j=1;j<=um['T'];j++){
                    cout << 'T';
                }
                um.erase('T');
            }

            if(um.find('F') != um.end()){
                for(int j=1;j<=um['F'];j++){
                    cout << 'F';
                }
                um.erase('F');
            }

            if(um.find('N') != um.end()){
                for(int j=1;j<=um['N'];j++){
                    cout << 'N';
                }
                um.erase('N');
            }
            for(auto x:um){
                for(int j=1;j<=um[x.first];j++){
                        cout << x.first;
                }
            }
            cout << endl;

        }else{
            for(char x:s){
                cout << x;
            }
        }
        cout << endl;
    }
}