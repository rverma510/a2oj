#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int> pqFirst;
    priority_queue<int> pqSecond;
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<2*n;i++){
        if(i<n)
            pqFirst.push(s[i] - '0');
        else
            pqSecond.push(s[i] - '0');
    }  
    if(pqFirst.top() > pqSecond.top()){

        while(pqFirst.size() > 0 && pqFirst.top() > pqSecond.top()){
            pqFirst.pop();
            pqSecond.pop();
        }
        if(pqFirst.size() == 0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    else if(pqFirst.top() < pqSecond.top()){
        while(pqFirst.size() > 0 && pqFirst.top() < pqSecond.top()){
            pqFirst.pop();
            pqSecond.pop();
        }
        if(pqFirst.size() == 0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    else
        cout<<"NO\n";
    return 0;
}