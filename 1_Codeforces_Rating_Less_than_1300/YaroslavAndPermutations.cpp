#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<int, int> m;
    map<int, int>::iterator it;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        m[temp]++;
    }
    int mx = INT_MIN;
    for(it = m.begin();it != m.end(); it++){
        if(mx < it->second)
            mx = it->second;
    }
    if(mx <= (n + 1) / 2)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}