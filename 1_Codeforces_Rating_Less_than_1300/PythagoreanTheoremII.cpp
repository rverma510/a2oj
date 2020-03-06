#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll n;
    cin>>n;
    ll count(0);
    for(ll i=1;i<n;i++){
        for(ll j=i;j<n;j++){
            ll sumOfSquares = i*i + j*j;
            if(sumOfSquares > n*n)
                break;
            ll temp = (ll)sqrt(sumOfSquares);
            if(temp * temp == sumOfSquares)
                count++;
        }
    }
    cout<<count<<"\n";
    return 0;
}