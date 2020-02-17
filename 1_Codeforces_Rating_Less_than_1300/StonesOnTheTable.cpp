#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count = 0;
    char c = s[0];
    for(int i=1;i<s.size();i++){
        if(c != s[i])
            c = s[i];
        else
            count++;
    }
    cout<<count<<"\n";
    return 0;
}