#include<bits/stdc++.h>
using namespace std;
int main(){
    string s, t;
    getline(cin, s);
    getline(cin, t);
    map<char, int> m;
    for(int i=0;i<s.size();i++){
        if(s[i] == ' ')
            continue;
        m[s[i]]++;
    }
    bool flag = true;
    for(int i=0;i<t.size();i++){
        if(t[i] != ' ' && m[t[i]] <= 0){
            flag = false;
            break;
        }
        m[t[i]]--;
    }
    if(flag)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}