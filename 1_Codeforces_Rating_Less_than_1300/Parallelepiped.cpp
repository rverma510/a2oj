#include<bits/stdc++.h>
using namespace std;
int main(){
    int a1, a2, a3;
    cin>>a1>>a2>>a3;
    int a = (int) sqrt((a1*a2)/a3);
    int b = a1 / a;
    int c = a2 / a;
    int res = (a + b + c) * 4;
    cout<<res<<"\n";
    return 0;
}