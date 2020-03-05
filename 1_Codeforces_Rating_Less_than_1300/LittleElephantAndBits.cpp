#include<bits/stdc++.h>
using namespace std;
int main(){
    string s, res="";
    cin>>s;
    bool first = true;
    for(int i=0;i<s.size();i++){
        if(first && s[i] == '0'){
            first = false;
            continue;
        }
        res += s[i];
    }
    if(first)
        cout<<res.substr(1, res.size())<<"\n";
    else
        cout<<res<<"\n";
    return 0;
}