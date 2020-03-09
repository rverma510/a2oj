#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll n, k;
    cin>>n>>k;
    ll mx = INT_MIN;
    for(ll i=0;i<n;i++){
        ll f, t;
        cin>>f>>t;
        if(t <= k)
            mx = max(mx, f);
        else 
            mx = max(mx, f + k - t);
    }
    cout<<mx<<endl;
    return 0;
}