#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int h = -1, m = -1;
    int count = 1;
    int mx = 1;
    for(int i=0;i<n;i++){
        int temp1, temp2;
        cin>>temp1>>temp2;
        if(temp1 == h && temp2 == m)
            count++;
        else{
            h = temp1;
            m = temp2;
            count = 1;
        }
        mx = max(mx, count);
    }
    cout<<mx<<"\n";
    return 0;
}