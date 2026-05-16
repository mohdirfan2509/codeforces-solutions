#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_cases;
    cin >> test_cases;
    for(int i=0;i<test_cases;i++){
        int n,m;
        cin >> n >> m;
        vector<vector<int>> cows(n,vector<int>(m));
        for(int j=0;j<n;j++){
            for(int k=0;k<m;k++){
                cin >> cows[j][k];
            }
        }
        for(int j=0;j<n;j++){
           sort(cows[j].begin(),cows[j].end());
        }
        
        bool flag=true;
        for(int j=0;j<n;j++){
            for(int k=0;k<m-1;k++){
                if(cows[j][k+1]-cows[j][k]!=n){
                    cout << -1 << endl;
                    flag=false;
                    break;
                }
            }
            if(flag==false){
                break;
            }
        }
        if(flag){
            vector<pair<int,int>> order(n);
            for(int j=0;j<n;j++){
              order[j]={cows[j][0],j};
            }
            sort(order.begin(),order.end());
            for(int j=0;j<n;j++){
              cout << order[j].second+1 << " " ;
            }
            cout << endl;
        }
    }

}