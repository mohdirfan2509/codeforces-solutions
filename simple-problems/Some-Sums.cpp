    // Question Link:https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Us
    #include<iostream>
    #include<bits/stdc++.h>
    using namespace std;

    int main(){
        long long n,a,b;
        cin >> n >> a >> b;
        long long ans=0;
        for(long long i=1;i<=n;i++){
            long long x=i;
            long long digitsSum=0;
            while(x>0){
                digitsSum+=x%10;
                x=x/10;
            }
            if(digitsSum>=a && digitsSum<=b){
                ans+=i;
            }

        }
        cout << ans << endl;
    }

