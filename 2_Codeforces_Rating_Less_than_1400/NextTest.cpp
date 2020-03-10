#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[3002] = {0};
    int mn = 1;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        a[temp] = 1;
        if(temp == mn){
            for(int j=temp+1;j<3002;j++){
                if(a[j] == 0){
                    mn = j;
                    break;
                }
            }
        }
    }
    cout<<mn<<endl;
    return 0;
}