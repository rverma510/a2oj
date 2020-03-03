#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    map<char, int> m;
    map<char, int>::iterator it;
    cin>>s;
    for(int i=0;i<s.size();i++){
        m[s[i]]++;
    }
    int count = 0;
    for(it = m.begin(); it != m.end(); it++){
        if((it->second)%2 == 1)
            count++;
    }
    if(count % 2 == 1 || count == 0)
        cout<<"First\n";
    else
        cout<<"Second\n";
    return 0;
}
