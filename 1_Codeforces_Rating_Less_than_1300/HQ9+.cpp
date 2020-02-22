#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    bool flag = false;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9'){
            flag = true;
            break;
        }
    }
    if(flag)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}