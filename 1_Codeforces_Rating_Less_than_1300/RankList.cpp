#include<bits/stdc++.h>
using namespace std;
struct val{
    int p, t;
};
bool compare(const val &a, const val &b){
    if(a.p > b.p)
        return true;
    else if(a.p < b.p)
        return false;
    else{
        if(a.t < b.t)
            return true;
        else
            return false;
    }
}
int main(){
    int n, k;
    cin>>n>>k;
    val v[n];
    for(int i=0;i<n;i++){
        int p, t;
        cin>>p>>t;
        v[i].p = p;
        v[i].t = t;
    }
    sort(v, v+n, compare);
    int count = 1;
    for(int i=k;i<n;i++){
        if(v[i].p == v[k-1].p && v[i].t == v[k-1].t)
            count++;
        else
            break;
    }
    for(int i=k-2;i>=0;i--){
        if(v[i].p == v[k-1].p && v[i].t == v[k-1].t)
            count++;
        else
            break;
    }
    cout<<count<<endl;
    return 0;
}