#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int countOne = 0;
    int countTwo = 0;
    int countThree = 0;
    for(int i=0;i<s.size();i++){
        if(s[i] == '1')
            countOne++;
        else if(s[i] == '2')
            countTwo++;
        else if(s[i] == '3')
            countThree++;
        else
            continue;
    }
    string res = "";
    for(int i=0;i<countOne;i++)
        res += "1+";
    for(int i=0;i<countTwo;i++)
        res += "2+";
    for(int i=0;i<countThree;i++)
        res += "3+";
    res = res.substr(0, res.size()-1);
    cout<<res<<endl;
    return 0;
}