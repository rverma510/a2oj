#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int cap = 0;
    int res = 0;
    for(int i=0;i<n;i++){
        int a, b;
        cin>>a>>b;
        cap = cap - a + b;
        res = max(res, cap);
    }
    cout<<res<<endl;
    return 0;
}