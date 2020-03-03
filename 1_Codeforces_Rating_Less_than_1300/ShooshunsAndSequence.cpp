#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin>>n>>k;
    int *a = new int [n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int key = a[k-1];
    bool flag = true;
    for(int i=k;i<n;i++){
        if(a[i] != key){
            flag = false;
            break;
        }
    }
    if(flag){
        k -= 2;
        for(;k>=0;k--){
            if(a[k] != key)
                break;
        }
        cout<<(k+1)<<"\n";
    }
    else
        cout<<-1<<"\n";

    return 0;
}