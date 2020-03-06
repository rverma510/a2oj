#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=4;
    char ch[4][4];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>ch[i][j];
    string res = "NO";
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            map<char, int> m;
            m['#'] = m['.'] = 0;
            m[ch[i-1][j-1]]++;
            m[ch[i-1][j]]++;
            m[ch[i][j-1]]++;
            m[ch[i][j]]++;
            if(m['#'] == 4 || m['.'] == 4 || (m['#'] == 3 && m['.'] == 1) || (m['#'] == 1 && m['.'] == 3)){
                res = "YES";
                break;
            }
        }
        if(res == "YES")
            break;
    }
    cout<<res;
    return 0;
}