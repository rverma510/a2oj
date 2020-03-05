#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *l = new int[n];
    int *r = new int[n];
    int left = INT_MAX;
    int right = INT_MIN;
    for(int i=0;i<n;i++){
        cin>>l[i]>>r[i];
        if(l[i] < left)
            left = l[i];
        if(r[i] > right)
            right = r[i];
    }
    int index = -1;
    for(int i=0;i<n;i++){
        if(left == l[i] && right == r[i]){
            index = i+1;
            break;
        }
    }
    cout<<index<<"\n";
    return 0;
}