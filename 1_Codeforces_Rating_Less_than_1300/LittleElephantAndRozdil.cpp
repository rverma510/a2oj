#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int mn = INT_MAX;
    int mn_index = -1;
    for(int i=0;i<n;i++){
        if(arr[i] < mn){
            mn = arr[i];
            mn_index = i+1;
        }
        else if(arr[i] == mn){
            mn_index = -1;
        }
    }
    if(mn_index != -1)
        cout<<mn_index<<"\n";
    else
        cout<<"Still Rozdil\n";
    return 0;
}