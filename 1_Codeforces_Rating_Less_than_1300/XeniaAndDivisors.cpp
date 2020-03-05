#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int, int> m;
    m[1] = m[2] = m[3] = m[4] = m[5] = m[6] = m[7] = 0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        m[temp]++;
    }
    if(m[5] == 0 && m[7] == 0 && m[2] >= m[4] && m[1] == m[4] + m[6] && m[2] + m[3] == m[4] + m[6]){
        for(int i=0;i<m[4];i++)
            cout<<1<<" "<<2<<" "<<4<<"\n";
        m[2] -= m[4];
        for(int i=0;i<m[2];i++)
            cout<<1<<" "<<2<<" "<<6<<"\n";
        for(int i=0;i<m[3];i++)
            cout<<1<<" "<<3<<" "<<6<<"\n";
    }
    else
        cout<<-1<<"\n";
    return 0;
}