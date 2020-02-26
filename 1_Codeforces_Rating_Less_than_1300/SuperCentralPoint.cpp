#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *x = new int[n];
    int *y = new int[n];
    for(int i=0;i<n;i++)
        cin>>x[i]>>y[i];
    int res = 0;
    for(int i=0;i<n;i++){
        bool left, right, bottom, upper;
        left = right = bottom = upper = false;
        for(int j=0;j<n;j++){
            if(i == j)
                continue;
            if(x[j] > x[i] && y[j] == y[i])
                right = true;
            else if(x[j] < x[i] && y[j] == y[i])
                left = true;
            else if(x[j] == x[i] && y[j] > y[i])
                upper = true;
            else if(x[j] == x[i] && y[j] < y[i])
                bottom = true;
        }
        if(left && right && upper && bottom)
            res++;
    }
    cout<<res<<"\n";
    return 0;
}