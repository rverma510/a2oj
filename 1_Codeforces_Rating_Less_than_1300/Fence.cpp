#include<bits./stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin>>n>>k;
    int *a = new int[n];
    int sum = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i<k)
            sum += a[i];
    }
    int temp = sum;
    int j = 0;
    for(int i=k;i<n;i++){
        temp += a[i];
        temp -= a[i-k];
        if(temp < sum){
            sum = temp;
            j = i-k+1;
        }   
    }
    cout<<(j+1)<<"\n";
    return 0;
}