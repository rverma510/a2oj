#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *a = new int[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int m;
    cin>>m;
    int * b = new int[m];
    for(int i=0;i<m;i++)
        cin>>b[i];
    int mx = INT_MIN;
    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(b[j]%a[i] == 0 && mx < b[j]/a[i]){
                mx = b[j]/a[i];
                count = 1;
            }
            else if(b[j]%a[i] == 0 && mx == b[j]/a[i])
                count++;
        }
    }
    cout<<count<<"\n";
    return 0;
}