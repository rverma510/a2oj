#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        for(int j=0;j<m;j++){
            if(s[j] == '.'){
                if((i+j) % 2 == 0)
                    s[j] = 'B';
                else
                    s[j] = 'W';
            }
        } 
        cout<<s<<endl;
   }
    return 0;
}