#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1, s2;
    cin>>s1;
    cin>>s2;
    bool flag = true;
    for(int i=0;i<s1.size();i++){
        if(tolower(s1[i]) < tolower(s2[i])){
            cout<<-1<<"\n";
            flag = false;
            break;
        }
        else if(tolower(s1[i]) > tolower(s2[i])){
            cout<<1<<"\n";
            flag = false;
            break;
        }
    }
    if(flag)
        cout<<0<<"\n";
    return 0;
}