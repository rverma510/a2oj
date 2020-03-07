#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    priority_queue<ll> pq;
    map<char, ll> m;
    map<char, ll>::iterator it;
    ll n, k;
    cin>>n>>k;
    for(ll i=0;i<n;i++){
        char temp;
        cin>>temp;
        m[temp]++;
    }
    for(it=m.begin();it!=m.end();it++)
        pq.push(it->second);
    ll coins = 0;
    while(!pq.empty() || k>0){
        ll temp = pq.top();
        pq.pop();
        if(temp <= k){
            coins += temp*temp;
            k -= temp;
        }
        else{
            coins += k*k;
            k = 0;
        }
    }
    cout<<coins<<"\n";
    return 0;
}