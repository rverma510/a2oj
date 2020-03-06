#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int usum = 0;
    int lsum = 0;
    int odd = 0;
    for(int i=0;i<n;i++){
        int u, l;
        cin>>u>>l;
        usum += u;
        lsum += l;

        odd += usum%2 ^ lsum%2;
    }
    if(usum%2 == 0 && lsum%2 == 0)
        cout<<0<<endl;
    else if(usum%2 == 1 && lsum%2 == 1)
        cout<<(odd>0?1:-1)<<endl;
    else
        cout<<-1<<endl;
    return 0;
}