#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    bool flag = true;
    for(int i=0;i<s.size();){
        if(s.size()-i>=3 && s[i] == '1' && s[i+1] == '4' && s[i+2] == '4')
            i += 3;
        else if(s.size() - i >= 2 && s[i] == '1' && s[i+1] == '4')    
            i += 2;
        else if(s.size() - i >= 1 && s[i] == '1')
            i += 1;
        else{
            flag = false;
            break;
        }
    }
    if(flag)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}