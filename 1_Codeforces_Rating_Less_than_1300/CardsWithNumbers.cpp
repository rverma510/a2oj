#include<bits/stdc++.h>
using namespace std;
int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n;
    cin>>n;
    map<int, int> m;
    vector<pair<int, int>> res;
    for(int i=0;i<2*n;i++){
        int temp;
        cin>>temp;
        if(m.find(temp) != m.end()){
            res.push_back({m[temp]+1, i+1});
            m.erase(temp);
        }
        else{
            m[temp] = i;
        }
    }
    if(m.size() == 0){
        for(int i=0;i<res.size();i++){
            pair<int, int> p = res[i];
            cout<<p.first<<" "<<p.second<<"\n";
        }
    }
    else
        cout<<-1<<"\n";
    return 0;
}