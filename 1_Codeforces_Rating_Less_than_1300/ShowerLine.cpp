#include<bits/stdc++.h>
using namespace std;
int main(){
    int **g = new int*[5];
    vector<int> v;
    for(int i=0;i<5;i++){
        g[i] = new int[5];
        for(int j=0;j<5;j++)
            cin>>g[i][j];
        v.push_back(i);
    }
    int total = INT_MIN;
    do{
        int temp = g[v[0]][v[1]] + g[v[1]][v[0]];
        temp += 2*(g[v[2]][v[3]] + g[v[3]][v[2]]);
        temp += g[v[1]][v[2]] + g[v[2]][v[1]];
        temp += 2*(g[v[3]][v[4]] + g[v[4]][v[3]]);
        if(temp > total)
            total = temp;

    }while(next_permutation(v.begin(), v.end()));
    cout<<total<<"\n";
    return 0;
}