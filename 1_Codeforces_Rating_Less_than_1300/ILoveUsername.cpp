#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, temp;
    cin>>n;
    int count = 0;
    cin>>temp;
    int best = temp;
    int worst = temp;
    for(int i=1;i<n;i++){
        cin>>temp;
        if(temp > best){
            best = temp;
            count++;
        }else if(temp < worst){
            worst = temp;
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}