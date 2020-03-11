#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll i;
    ll n, x, mx;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
     if(n<=2){
        cout<<n;
        return 0;
    }
    i = 0;
    mx = 0;
    x = 2;
    while(i<=n-2){
        if(a[i]+a[i+1]==a[i+2])
            x++,i++;

        else{
            mx = max(mx,x);
            x=2;i++;
        }
    }
    mx = max(mx,x);
    cout<<mx;
    return 0;
}