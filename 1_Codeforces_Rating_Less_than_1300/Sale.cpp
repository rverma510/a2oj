#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    int *a = new int[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a, a+n);
    int gain = 0;
    for(int i=0;i<n && m != 0;i++){
        if(a[i] < 0){
            gain += a[i];
            m--;
        }
        else
            break;
    }
    cout<<(-1 * gain)<<"\n";
    return 0;
}