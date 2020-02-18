#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int left, right;
    left = right = 0;
    for(int i=0;i<n;i++){
        int tempL, tempR;
        cin>>tempL>>tempR;
        left += tempL;
        right += tempR;
    }
    int sum = min(left, n - left);
    sum += min(right, n - right);
    cout<<sum<<endl;
    return 0;
}