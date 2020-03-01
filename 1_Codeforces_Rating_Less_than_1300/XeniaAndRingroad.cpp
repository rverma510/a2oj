#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
    lli n, m;
    cin>>n>>m;
    lli time = 0;
    int curr = 1;
    for(lli i=0;i<m;i++){
        lli temp;
        cin>>temp;
        if(temp >= curr)
            time += temp - curr;
        else{
            time += n + 1 - curr;
            curr = 1;
            time += temp - curr;
        }
        curr = temp;
    }
    cout<<time<<"\n";
    return 0;
}