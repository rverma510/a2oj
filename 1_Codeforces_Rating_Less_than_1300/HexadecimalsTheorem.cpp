#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n == 0)
        cout<<0<<" "<<0<<" "<<0<<"\n";
    else if(n == 1)
        cout<<0<<" "<<0<<" "<<1<<"\n";
    else if(n == 2)
        cout<<0<<" "<<1<<" "<<1<<"\n";
    else if(n == 3)
        cout<<0<<" "<<1<<" "<<2<<"\n";
    else{
        int a = round(n / ((1 + sqrt(5)) / 2.0));
        int b = round(a / ((1 + sqrt(5)) / 2.0));
        int c = round(b / ((1 + sqrt(5)) / 2.0));
        int d = round(c / ((1 + sqrt(5)) / 2.0));
        cout<<d<<" "<<c<<" "<<a<<"\n";
    }
    return 0;
}