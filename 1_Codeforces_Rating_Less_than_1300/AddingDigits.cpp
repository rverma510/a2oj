#include<bits/stdc++.h>
using namespace std;
int main(){
    int i, a, b, n;
    cin>>a>>b>>n;
    for(i=0;i<10;i++){
        int temp = a*10 + i;
        if(temp % b == 0){
            a = temp;
            break;
        }
    }   
    if(i == 10)
        cout<<-1<<"\n";
    else{
        cout<<a;
        for(int i=0;i<n-1;i++)
            cout<<0;
        cout<<endl;
    }
    
    return 0;
}