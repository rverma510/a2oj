#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    int temp;
    int min_a = INT_MAX, max_a = INT_MIN, min_b = INT_MAX;
    for(int i=0;i<n;i++){
        cin>>temp;
        if(min_a >  temp)
            min_a = temp;
        if(max_a < temp)
            max_a = temp;
    }
    for(int i=0;i<m;i++){
        cin>>temp;
        if(min_b > temp)
            min_b = temp;
    }
    int time = 2*min_a > max_a ? 2*min_a : max_a;
    if(time < min_b)
        cout<<time<<endl;
    else
        cout<<-1<<endl;
    return 0;
}