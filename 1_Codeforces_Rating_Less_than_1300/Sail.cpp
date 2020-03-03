#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll dis(ll sx, ll sy, ll ex, ll ey){
    return abs(ex - sx) + abs(ey - sy);
}
int main(){
    ll t, sx, sy, ex, ey;
    cin>>t>>sx>>sy>>ex>>ey;
    string s;
    cin>>s;
    ll count = 0;
    for(int i=0;i<s.size();i++){
        if(sx == ex && sy == ey)
            break;
        count++;
        ll curr = dis(sx, sy, ex, ey);
        if(s[i] == 'E'){
            if(curr > dis(sx+1, sy, ex, ey))
                sx++;
        }
        else if(s[i] == 'S'){
            if(curr > dis(sx, sy-1, ex, ey))
                sy--;
        }
        else if(s[i] == 'W'){
            if(curr > dis(sx-1, sy, ex, ey))
                sx--;
        }
        else{
            if(curr > dis(sx, sy+1, ex, ey))
                sy++;
        }
    }
    if(sx == ex && sy == ey)
        cout<<count<<"\n";
    else
        cout<<-1<<"\n";
    return 0;
}