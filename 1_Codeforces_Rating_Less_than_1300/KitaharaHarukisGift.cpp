#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<int, int> m;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        m[temp]++;
    }
    int res = m[100] - (m[200]%2)*2;
    if(res >= 0 && res%2 == 0)
        cout<<"YES\n";
    else
        cout<<"NO\n";   
    return 0;
}