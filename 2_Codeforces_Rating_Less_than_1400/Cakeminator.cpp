#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> row, col;
    int r, c;
    cin>>r>>c;
    for(int i=0;i<r;i++)
        row.insert(i);
    for(int i=0;i<c;i++)
        col.insert(i);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            char ch;
            cin>>ch;
            if(ch == 'S'){
                if(row.count(i) != 0)
                    row.erase(i);
                if(col.count(j) != 0)
                    col.erase(j);
            }
        }
    }
    int res = row.size() * c + col.size() * (r - row.size());
    cout<<res<<endl;
    return 0;
}