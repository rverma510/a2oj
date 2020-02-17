#include<bits/stdc++.h>
using namespace std;
int main(){
    int res = -1;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            int temp;
            cin>>temp;
            if(temp != 0){
                res = (abs(i-2) + abs(j-2));
            }
        }
    }
    cout<<res<<"\n";
    return 0;
}