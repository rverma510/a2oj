#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *arr = new int[n+1];
    arr[0] = 0;
    for(int i=1;i<=7;i++){
        cin>>arr[i];
        arr[i] += arr[i-1];
    }
    n = (n-1)%arr[7] + 1;
    for(int i=1;i<=7;i++){
        if(arr[i] >= n){
            cout<<i<<"\n";
            break;
        }
    }
    return 0;
}