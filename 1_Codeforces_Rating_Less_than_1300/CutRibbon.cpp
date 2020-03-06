#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, a, b, c;
    cin>>n>>a>>b>>c;
    int x = min(a, min(b, c));
    x = n/x;
    int mx = INT_MIN;
    for(int i=x;i>=0;i--){
        for(int j=0;j<=x;j++){
            int k = abs((n-a*i-b*j)/c);
            if(a*i+b*j+c*k == n)
                mx = max(mx, i+j+k);
        }
    }
    cout<<mx<<"\n";
    return 0;
}