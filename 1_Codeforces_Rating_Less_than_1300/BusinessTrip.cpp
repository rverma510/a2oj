#include<bits/stdc++.h>
using namespace std;
int main(){ 
    int k;
    cin>>k;
    int *m = new int[12];
    for(int i=0;i<12;i++)
        cin>>m[i];
    sort(m, m+12);
    int count = 0;
    for(int i=11;i>=0 && k>0;i--){
        k -= m[i];
        count++;
    }
    if(k>0)
        cout<<-1<<"\n";
    else
        cout<<count<<"\n";
    return 0;
}