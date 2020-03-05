#include<bits/stdc++.h>
using namespace std;
int main(){
    string a, b;
    cin>>a>>b;
    if(a.size() != b.size())
        cout<<"NO\n";
    else{
        string temp1 = "", temp2 = "";
        for(int i=0;i<a.size();i++){
            if(a[i] != b[i]){
                temp1 += a[i];
                temp2 += b[i];
            }
        }
        reverse(temp2.begin(), temp2.end());
        if((temp1.size() == 0 || temp1.size() == 2) && temp1 == temp2)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}