#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    int temp = (n*(n+1))/2;
    m = m % temp;
    for(int i=1;i<=n;i++){
        if(i > m)
            break;
        m -= i;
    }
    cout<<m<<endl;
    return 0;
}