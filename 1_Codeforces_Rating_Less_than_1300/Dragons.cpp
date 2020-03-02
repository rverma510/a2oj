#include<bits/stdc++.h>
using namespace std;
int main(){
    int s, n;
    cin>>s>>n;
    pair<int, int> p[n];
    for(int i=0;i<n;i++){
        int x, y;
        cin>>x>>y;
        p[i].first = x;
        p[i].second = y;
    }
    sort(p, p+n);
    bool flag = true;
    for(int i=0;i<n;i++){
        if(p[i].first < s){
            s += p[i].second;
        }
        else{
            flag = false;
            break;
        }
    }
    if(flag){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    

    return 0;
}