#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,k;
    cin>>n>>k;
    long long int mid = ceil((double)n/2); 
    if(k <= mid)
        cout<<(2*k - 1)<<"\n";
    else
        cout<<(2*(k-mid))<<"\n";
    return 0;
}