#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int res = 0;
    for(int i=0;i<n;i++){
        int a, b, c;
        cin>>a>>b>>c;
        int s = a + b + c;
        if(s >= 2)
            res++;
    }
    cout<<res<<"\n";
    return 0;
}