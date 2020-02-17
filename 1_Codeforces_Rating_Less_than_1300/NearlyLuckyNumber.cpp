#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    int luckyNum = 0;
    while(n){
        if(n%10 == 4 || n%10 == 7)
            luckyNum++;
        n /= 10;
    }
    if(luckyNum == 4 || luckyNum == 7)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}