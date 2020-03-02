#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    int *p = new int[m];
    for(int i=0;i<m;i++)
        cin>>p[i];
    sort(p, p+m);
    int mn = INT_MAX;
    for(int i=0;i<=m-n;i++){
        int diff = p[n+i-1] - p[i];
        if(diff < mn)
            mn = diff;
    }
    cout<<mn<<"\n";
    return 0;
}