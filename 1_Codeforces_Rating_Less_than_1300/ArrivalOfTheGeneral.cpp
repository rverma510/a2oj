#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int mx = 0;
    int mn = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i] > arr[mx])
            mx = i;
        if(arr[i] <= arr[mn])
            mn = i;
    }
    int res = mx + n - 1 - mn;
    if(mx > mn)
        res--;
    cout<<res<<"\n";
    return 0;
}