#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int cFive, cZero;
    cFive = cZero = 0;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        if(temp == 5)
            cFive++;
        else
            cZero++;
    }
    cFive = (cFive / 9) * 9;
    if(cZero && cFive > 0){
        for(int i=0;i<cFive;i++)
            cout<<5;
        for(int i=0;i<cZero;i++)
            cout<<0;
        cout<<"\n";
    }
    else if(cZero)
        cout<<0<<"\n";
    else
        cout<<-1<<"\n";
    
    return 0;
}