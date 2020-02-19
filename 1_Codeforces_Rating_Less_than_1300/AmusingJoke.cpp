#include<bits/stdc++.h>
using namespace std;
int main(){
    string guest;
    string host;
    string letters;
    cin>>guest>>host>>letters;
    guest = guest + host;
    sort(guest.begin(), guest.end());
    sort(letters.begin(), letters.end());
    if(guest.compare(letters) == 0)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}