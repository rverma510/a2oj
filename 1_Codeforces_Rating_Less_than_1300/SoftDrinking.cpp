#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int res = (k*l)/(nl*n);
    res = min(res, (c*d)/n);
    res = min(res, p/(np*n));
    cout<<res<<"\n";
    return 0;
}