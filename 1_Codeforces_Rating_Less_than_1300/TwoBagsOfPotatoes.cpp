#include<bits/stdc++.h>
using namespace std;
int main(){
    int y, k, n;
    cin>>y>>k>>n;
    int x = k - y%k;
    int top = n-y;
    if(x <= top){
        while(x <= top){
            cout<<x<<" ";
            x += k;
        }
        cout<<"\n";
    }
    else
        cout<<-1<<endl;
    return 0;
}