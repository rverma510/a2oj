#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll n;
    cin>>n;
    ll sum = 0;
    for(ll i=0;i<n;i++){
        ll temp;
        cin>>temp;
        sum += temp;
    }
    if(sum % n == 0)
        cout<<n<<"\n";
    else
        cout<<(n-1)<<"\n";
    return 0;
}