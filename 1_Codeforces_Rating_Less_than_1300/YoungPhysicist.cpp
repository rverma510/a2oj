#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, x=0, y=0, z=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int temp_x, temp_y, temp_z;
        cin>>temp_x>>temp_y>>temp_z;
        x += temp_x;
        y += temp_y;
        z += temp_z;
    }
    if(x == 0 && y == 0 && z == 0)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}