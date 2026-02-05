#include<bits/stdc++.h>
using namespace std;
#define int long long
int isprime(int n){
    if(n<4)return 1;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return 1;
            break;
        }else return 0;
    }
}
signed main(){
    int t; cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<=4)cout<<-1<<endl;
        else{
            cout<<1<<' '<<3<<' ';
            for(int i=7;i<=n;i+=2){
                cout<<i<<' ';
            }
            cout<<5<<' '<<4<<' '<<2<<' ';
            for(int i=6;i<=n;i+=2){
                cout<<i<<' ';
            }
            cout<<endl;
        }
    }
}