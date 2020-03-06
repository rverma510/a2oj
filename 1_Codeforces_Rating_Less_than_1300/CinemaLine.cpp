#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<int, int> m;
    m[25] = m[50] = m[100] = 0;
    string res = "YES";
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        m[temp]++;
        int bal = temp - 25;
        if(bal == 25){
            if(m[25] > 0)
                m[25]--;
            else{
                res = "NO";
                break;
            }
        }
        else if(bal == 50){
            if(m[50] > 0)
                m[50]--;
            else if(m[25] > 1)
                m[25] -= 2;
            else{
                res = "NO";
                break;
            }
        }
        else if(bal == 75){
            if(m[50] > 0 && m[25] > 0){
                m[50]--;
                m[25]--;
            }
            else if(m[25] > 2)
                m[25] -= 3;
            else{
                res = "NO";
                break;
            }
        } 
    }
    cout<<res<<"\n";

    return 0;
}