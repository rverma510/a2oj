#include<bits/stdc++.h>
using namespace std;
#define mod 1073741824;
typedef long long int ll;
int main(){
    int n = 1000001;
    ll *arr = new ll[n];
    for(ll i=1;i<=n;i++){
        for(ll j=i;j<=n;j+=i){
            arr[j]++;
        }
    }
    ll a, b, c;
    cin>>a>>b>>c;
    ll res = 0;
    for(ll i=1;i<=a;i++){
        for(ll j=1;j<=b;j++){
            for(ll k=1;k<=c;k++){
                res += arr[i*j*k];
                res %= mod;
            }
        }
    }
    cout<<res<<"\n";
    return 0;
}