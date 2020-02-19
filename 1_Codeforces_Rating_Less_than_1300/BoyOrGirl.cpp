#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    set<char> s(str.begin(), str.end());
    if(s.size()%2 == 0)
        cout<<"CHAT WITH HER!";
    else
        cout<<"IGNORE HIM!";
    return 0;
}