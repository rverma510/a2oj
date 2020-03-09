#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll x, y;
    cin>>x>>y;
    ll res = abs(x) + abs(y);
    if(x>0 && y>0)
        cout<<0<<" "<<res<<" "<<res<<" "<<0<<endl;
    else if(x>0 && y<0)
        cout<<0<<" "<<-res<<" "<<res<<" "<<0<<endl;
    else if(x<0 && y>0)
        cout<<-res<<" "<<0<<" "<<0<<" "<<res<<endl;
    else
        cout<<-res<<" "<<0<<" "<<0<<" "<<-res<<endl;
    return 0;
}