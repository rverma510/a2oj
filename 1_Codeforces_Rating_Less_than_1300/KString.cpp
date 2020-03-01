#include<bits/stdc++.h>
using namespace std;
int main(){
    map<char, int> m;
    map<char, int>::iterator it;
    int k;
    string s, res="";
    bool flag = true;
    cin>>k;
    cin>>s;
    for(int i=0;i<s.size();i++)
        m[s[i]]++;
    for(it = m.begin(); it != m.end();it++){
        if((it->second)%k != 0){
            flag = false;
            break;
        }
    }
    if(flag){
        s = "";
        for(it = m.begin(); it != m.end();it++){
           for(int i=0;i< it->second/k;i++)
                s += it->first;
        }
        for(int i=0;i<k;i++)
            res += s;
        cout<<res<<"\n"; 
    }
    else{
        cout<<-1<<"\n";
    }

    return 0;
}