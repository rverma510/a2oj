#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    char ch = '\0';
    int count = 0;
    bool flag = false;
    for(int i=0;i<s.size();i++){
        if(s[i] != ch){
            ch = s[i];
            count = 1;
        }
        else{
            count++;
            if(count >= 7)
                flag = true;
        }
    }
    if(flag)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}