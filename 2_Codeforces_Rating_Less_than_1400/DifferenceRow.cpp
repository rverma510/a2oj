#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int *arr = new int[n];
    int mn = INT_MAX;
    int mx = INT_MIN;
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
        mn = min(mn, arr[i]);
        mx = max(mx, arr[i]);
    }
    bool maxi = true, mini = true;
    sort(arr, arr + n);
    cout<<mx<<" ";
    for (int i = 0; i < n; i++) {
        if (arr[i] == mx && maxi) {
            maxi = false;
        }
        else if (arr[i] == mn && mini) {
            mini = false;
        }
        else {
            cout<<arr[i]<<" ";
        }
    }   
    cout<<mn<<endl;
    return 0;
}