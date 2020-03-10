#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, x, y;
    cin>>n>>x>>y;
    int req = (y * n + 99) / 100;
    int toClone = max(0, req - x);
    cout<<toClone<<endl;
    return 0;
}