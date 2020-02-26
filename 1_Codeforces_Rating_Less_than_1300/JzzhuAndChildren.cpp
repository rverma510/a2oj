#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    int *arr = new int[n];
    int index = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(ceil((double)arr[i]/m) >= ceil((double)arr[index]/m))
            index = i;
    }
    cout<<(index+1)<<endl;
    return 0;
}