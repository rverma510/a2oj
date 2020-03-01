#include<bits/stdc++.h>
using namespace std;
int main(){
    string s, res = "";
    cin>>s;
    bool space = false;
    for(int i=0;i<s.size();){
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
            if(space){
                res += " ";
                space = false;
            }
            i += 3;
        }
        else{
            res += s[i];
            space = true;
            i++;
        }
    }
    cout<<res<<"\n";
    return 0;
}