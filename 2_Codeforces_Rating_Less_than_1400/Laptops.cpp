#include<bits/stdc++.h>
using namespace std;
struct val{
    int a, b;
};
bool compare(const val &x, const val &y){
    if(x.a < y.a)
        return true;
    else if(x.a > y.a)
        return false;
    else{
        if(x.b <= y.b)
            return true;
        return false;
    }
}
int main(){
    priority_queue<int> price;
    int n;
    cin>>n;
    val v[n];
    for(int i=0;i<n;i++)
        cin>>v[i].a>>v[i].b;
    sort(v, v+n, compare);
    string res = "Poor Alex";
    for(int i=0;i<n-1;i++){
        if(v[i].a < v[i+1].a){
            price.push(v[i].b);
            if(price.top() > v[i+1].b){
                res = "Happy Alex";
                break;
            }
        }
    }
    cout<<res<<"\n";
    return 0;
}