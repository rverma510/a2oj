#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1, s2;
    cin>>s1;
    cin>>s2;
    string res = "";
    for(int i=0;i<s1.size();i++){
        if(s1[i] == s2[i])
            res += '0';
        else
            res += '1';
    }
    cout<<res<<"\n";
    return 0;
}