#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int> pos, neg, zero;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        if(temp > 0)
            pos.push(temp);
        else if(temp < 0)
            neg.push(temp);
        else
            zero.push(temp);
    }
    if(neg.size() % 2 == 0){
        zero.push(neg.front());
        neg.pop();
    }
    if(pos.size() == 0){
        pos.push(neg.front());
        neg.pop();
        pos.push(neg.front());
        neg.pop();
    }
    cout<<neg.size();
    while(!neg.empty()){
        cout<<" "<<neg.front();
        neg.pop();
    }
    cout<<endl;
    cout<<pos.size();
    while(!pos.empty()){
        cout<<" "<<pos.front();
        pos.pop();
    }
    cout<<endl;
    cout<<zero.size();
    while(!zero.empty()){
        cout<<" "<<zero.front();
        zero.pop();
    }
    cout<<endl;
    return 0;
}