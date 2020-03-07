#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *a = new int[n];
    int one = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i])
            one++;
    }
    int sum = 0, res = 0;
    for(int i=0;i<n;i++){
        if(a[i] == 0)
            sum++;
        else
            sum--;
        res = max(res, sum);
        if(sum < 0)
            sum = 0;
    }
    if(one == n)
        cout<<one-1<<"\n";
    else
        cout<<(one + res)<<"\n";
    return 0;
}