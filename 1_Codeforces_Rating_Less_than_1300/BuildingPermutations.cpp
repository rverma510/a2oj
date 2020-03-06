#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll n;
    cin>>n;
    ll *arr = new ll[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    ll count = 0;
    for(ll i=n-1;i>=0;i--){
        count += abs(i + 1 - arr[i]);
    }
    cout<<count<<"\n";
    return 0;
}