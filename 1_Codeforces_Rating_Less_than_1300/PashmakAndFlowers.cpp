#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
    lli n;
    cin>>n;
    lli *a = new lli[n];
    lli mx = INT_MIN;
    lli mn = INT_MAX;
    lli mx_count = 1;
    lli mn_count = 1;
    for(lli i=0;i<n;i++){
        cin>>a[i];
        if(a[i] >= mx){
            if(mx == a[i])
                mx_count++;
            else
                mx_count = 1;
            mx = a[i];
        }
        if(a[i] <= mn){
            if(mn == a[i])
                mn_count++;
            else
                mn_count = 1;
            mn = a[i];
        }
    }
    if(mx == mn)
        cout<<0<<" "<<(n*(n-1))/2<<"\n";
    else
        cout<<(mx - mn)<<" "<<(mx_count * mn_count)<<"\n";
    return 0;
}