#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<int, vector<int>> m;
    map<int, vector<int>>::iterator m_it;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        m[temp].push_back(i);
    }
    vector<pair<int, int>> res;
    for(m_it = m.begin(); m_it != m.end(); m_it++){
        int i = m_it->first;
        if(m[i].size() == 1)
            res.push_back({i, 0});
        else{
            set<int> s;
            for(int j=1;j<m[i].size();j++)
                s.insert(m[i][j] - m[i][j-1]);
            if(s.size() == 1)
                res.push_back({i, *s.begin()});
        }
    }
    cout<<res.size()<<"\n";
    for(int i=0;i<res.size();i++)
        cout<<res[i].first<<" "<<res[i].second<<"\n";
    return 0;
}