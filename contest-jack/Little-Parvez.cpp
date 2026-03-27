#include<iostream>

using namespace std;

int main(){
    int test_cases;
    cin >> test_cases;
    for(int i=0;i<test_cases;i++){
        int n,m;
        cin >> n >> m;
        if(n==m){
            cout << "YES" << "\n";
        }else{
            if(n>m && (n-m)%2==0){
                cout << "YES" << "\n";
            }else if(n>m && (n-m)%2==1){
                cout << "NO" << "\n";
            }else{
                cout << "NO" << "\n";
            }
        }
    }
}