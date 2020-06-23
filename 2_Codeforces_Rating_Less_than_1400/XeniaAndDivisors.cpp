#include<bits/stdc++.h>
using namespace std;
int main() {
    int *arr = new int[8]();
    for (int i = 0; i < 8; i++) {
        arr[i] = 0;
    }
    int n;
    cin>>n;
    for(int i = 0; i < n; i++) {
        int temp;
        cin>>temp;
        arr[temp]++;
    }
    if (arr[5] == 0 && arr[7] == 0 && arr[2] >= arr[4] && arr[1] == arr[4] + arr[6] && arr[2] + arr[3] == arr[4] + arr[6]) {
        for (int i = 0; i < arr[4]; i++)
            cout<<1<<" "<<2<<" "<<4<<endl;
        arr[2] -= arr[4];
        for (int i = 0; i < arr[2]; i++)
            cout<<1<<" "<<2<<" "<<6<<endl;
        for (int i = 0; i < arr[3]; i++)
            cout<<1<<" "<<3<<" "<<6<<endl;
    }
    else {
        cout<<-1<<endl;
    }
    delete [] arr;
    return 0;
}