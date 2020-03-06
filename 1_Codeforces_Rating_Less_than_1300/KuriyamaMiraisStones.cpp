#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll n, m;
    cin>>n;
    ll *v = new ll[n];
    ll *u = new ll[n];
    for(ll i=0;i<n;i++){
        cin>>v[i];
        u[i] = v[i];
    }
    sort(u, u+n);
    for(ll i=1;i<n;i++){
        v[i] += v[i-1];
        u[i] += u[i-1];
    }
    cin>>m;
    for(ll i=0;i<m;i++){
        ll op, l, r;
        cin>>op>>l>>r;
        if(op == 1){
            if(l == 1)
                cout<<v[r-1]<<"\n";
            else
                cout<<v[r-1] - v[l-2]<<"\n";
        }
        else{
            if(l == 1)
                cout<<u[r-1]<<"\n";
            else
                cout<<u[r-1] - u[l-2]<<"\n";
        }
    }

    return 0;
}