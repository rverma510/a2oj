#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m, d;
    cin>>n>>m>>d;
    int *a = new int[n*m];
    for(int i=0;i<n*m;i++){
        cin>>a[i];
    }
    sort(a, a+n*m);
    int r = a[0] % d;
    int mid = a[(n*m)/2];
    int res = 0;
    for(int i=0;i<n*m;i++){
        if(a[i]%d != r){
            res = -1;
            break;
        }
        else
            res += abs(a[i]-mid)/d;
    }
    cout<<res<<endl;
    return 0;
}