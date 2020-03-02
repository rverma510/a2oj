#include<bits/stdc++.h>
using namespace std;
int main(){
    string s, res = "";
    cin>>s;
    for(int i=0;i<s.size();i++){
        char ch = tolower(s[i]);
        if(ch == 'a' || ch == 'o' || ch == 'y' || ch == 'e' || ch == 'u' || ch == 'i')
            continue;
        else{
            res += ".";
            res += ch;
        }
    }
    cout<<res<<"\n";
    return 0;
}