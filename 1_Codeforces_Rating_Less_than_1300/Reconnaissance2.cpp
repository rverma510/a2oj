#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int mn = abs(arr[0] - arr[n-1]);
    int a = n-1, b = 0;
    for(int i=0;i<n-1;i++){
        if(abs(arr[i] - arr[i+1]) < mn){
            mn = abs(arr[i] - arr[i+1]);
            a = i;
            b = i+1;
        }
    }
    cout<<(a+1)<<" "<<(b+1)<<"\n";
    return 0;
}