#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    float res = 0;
    for(int i=0;i<n;i++){
        float temp;
        cin>>temp;
        res += temp;
    }
    res /= n;
    cout<<res<<"\n";
    return 0;
}
