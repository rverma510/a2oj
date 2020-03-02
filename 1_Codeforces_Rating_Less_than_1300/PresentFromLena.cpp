#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=-n;i<=n;i++){
        int j = n - abs(i);
        for(int k=0;k<abs(i);k++)
            cout<<"  ";
        for(int k=0;k<j;k++)
            cout<<k<<" ";
        for(int k=j;k>=0;k--)
            cout<<k<<" ";
        cout<<"\n";
    }

    return 0;
}