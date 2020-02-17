#include<bits/stdc++.h>
using namespace std;
bool disYear(int y){
    bool visited[10] = {false};
    while(y){
        if(visited[y%10])
            return false;
        visited[y%10] = true;
        y /= 10;
    }
    return true;
}
int main(){
    int y;
    cin>>y;
    for(int i=y+1;i<10000;i++){
        if(disYear(i)){
            cout<<i<<"\n";
            break;
        }
    }
    return 0;
}