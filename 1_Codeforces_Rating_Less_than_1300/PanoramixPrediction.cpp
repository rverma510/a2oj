#include<bits/stdc++.h>
using namespace std;
bool checkForPrime(int num){
    for(int i=2;i<=(int)sqrt(num);i++)
        if(num%i == 0)
            return false;
    return true;
}
int main(){
    int i, n, m;
    cin>>n>>m;
    if(!checkForPrime(m))
        cout<<"NO\n";
    else{
        for(i=n+1;i<m;i++)
            if(checkForPrime(i))
                break;
        if(i == m)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    
    return 0;
}