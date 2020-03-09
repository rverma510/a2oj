#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int odd = 0;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        if(temp%2 == 1)
            odd++;
    }
    if(odd % 2 == 0)
        cout<<(n-odd)<<endl;
    else
        cout<<odd<<endl;
    
    return 0;
}