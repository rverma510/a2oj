#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    set<int> s;
    for(int i=n-1;i>=0;i--){
        s.insert(a[i]);
        a[i] = s.size();
    }
    for(int i=0;i<m;i++){
        int temp;
        cin>>temp;
        cout<<a[temp-1]<<endl;
    }

    return 0;
}