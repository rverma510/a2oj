#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long int ll;
int main(){
    ll x, y, n;
    cin>>x>>y>>n;
    ll res;
    if(n == 1)
        res = x;
    else if(n == 2)
        res = y;
    else if((n-3)%6 == 0)
        res = y - x;
    else if((n-3)%6 == 1)
        res = -x;
    else if((n-3)%6 == 2)
        res = -y;
    else if((n-3)%6 == 3)
        res = x - y;
    else if((n-3)%6 == 4)
        res = x;
    else if((n-3)%6 == 5)
        res = y;
    res = res % mod;
    if(res < 0)
        res = mod + res;
    cout<<res<<"\n";
    return 0;
}