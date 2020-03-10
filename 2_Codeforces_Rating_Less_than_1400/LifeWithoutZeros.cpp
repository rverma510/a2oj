#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll func(ll n){
    string x = "";
    while(n){
        if(n%10 == 0){
            n /= 10;
            continue;
        }
        x = to_string(n%10) + x;
        n /= 10;
    }
    return stoi(x);
}
int main(){
    ll a, b;
    cin>>a>>b;
    ll c = a+b;
    ll x = func(a);  
    ll y = func(b);
    ll z = func(c);
    if(x + y == z)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}