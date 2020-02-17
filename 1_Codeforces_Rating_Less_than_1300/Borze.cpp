#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string res = "";
    for(int i=0;i<s.size();){
        if(s[i] == '.'){
            res = res + '0';
            i++;
        }
        else if(s[i] == '-' && s[i+1] == '.'){
            res = res + '1';
            i += 2;
        }
        else if(s[i] == '-' && s[i+1] == '-'){
            res = res + '2';
            i += 2;
        }
        else
            i++;
    }
    cout<<res<<"\n";
    return 0;
}