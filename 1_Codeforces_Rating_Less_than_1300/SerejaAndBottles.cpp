#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *a = new int[n];
    int *b = new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    int count = n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i == j)
                continue;
            if(a[i] == b[j]){
                a[i] = -1;
                count--;
                break;
            }
        }
    }
    cout<<count<<"\n";
    return 0;
}