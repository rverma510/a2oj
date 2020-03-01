#include<bits/stdc++.h>
using namespace std;
int main(){
    string a, b;
    cin>>a;
    cin>>b;
    bool flag = true;
    if(a.size() != b.size())
        flag = false;
    else{
        for(int i=0;i<a.size();i++){
            if(a[i] != b[a.size()-1-i]){
                flag = false;
                break;
            }
        }
    }
    if(flag)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}