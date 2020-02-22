#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    long long int v=0, p=0;
    cin>>n;
    int *index = new int[100001];
    for(int i=0;i<100001;i++)
        index[i] = -1;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        index[temp] = i+1;
    }
    cin>>m;
    for(int i=0;i<m;i++){
        int temp;
        cin>>temp;
        if(index[temp] != -1){
            v += index[temp];
            p += n - index[temp] + 1;    
        }
        else{
            v += n;
            p += n;
        }
        
    }
    cout<<v<<" "<<p<<"\n";   
    return 0;
}