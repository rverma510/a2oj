#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    string s;
    cin>>s;
    int len = s.size();
    int count = 0;
    while(len > 1){
        int sum = 0;
        for(int i=0;i<len;i++)
            sum += s[i] - '0';
        s = to_string(sum);
        count++;
        len = s.size();
    }
    cout<<count<<endl;
    return 0;
}