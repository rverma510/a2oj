#include<bits/stdc++.h>
using namespace std;
int main(){
    string x;
    cin>>x;
    int lower = 0, upper = 0;
    for(int i=0;i<x.size();i++){
        if(x[i]>='a' && x[i]<='z')
            lower++;
        else
            upper++;
    }
    if(lower >= upper)
        for(int i=0;i<x.size();i++)
            x[i] = tolower(x[i]);
    else
        for(int i=0;i<x.size();i++)
            x[i] = toupper(x[i]);
    cout<<x<<"\n";
    return 0;
}