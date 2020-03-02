#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int> maxPQ;
    priority_queue<int, vector<int>, greater<int>> minPQ;
    int i, n, m, mn = 0, mx = 0;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int temp;
        cin>>temp;
        maxPQ.push(temp);
        minPQ.push(temp);
    }
    i = 0;
    while(i<n){
        int temp = maxPQ.top();
        maxPQ.pop();
        mx += temp--;
        if(temp > 0)
            maxPQ.push(temp);
        i++;
    }

    i = 0;
    while(i<n){
        int temp = minPQ.top();
        minPQ.pop();
        mn += temp--;
        if(temp > 0)
            minPQ.push(temp);
        i++;
    }   
    cout<<mx<<" "<<mn<<"\n";
    return 0;
}