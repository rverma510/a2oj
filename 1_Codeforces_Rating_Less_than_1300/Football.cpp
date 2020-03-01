#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string, int> m;
    map<string, int>::iterator itr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string t;
        cin>>t;
        m[t]++;
    }
    int mx = -1;
    string winner = "";
    for (itr = m.begin(); itr != m.end(); ++itr) { 
         if(mx < itr->second){
             mx = itr->second;
             winner = itr->first;
         }
    }
    cout<<winner<<"\n"; 
    return 0;
}