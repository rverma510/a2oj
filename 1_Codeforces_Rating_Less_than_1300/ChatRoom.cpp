#include<bits/stdc++.h>
using namespace std;
int main(){
    string s, target = "hello";
    cin>>s;
    int k = 0;
    for(int i=0; i<s.size() && k<target.size(); i++){
        if(s[i] == target[k])
            k++;
    }
    if(k == target.size()){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    return 0;
}