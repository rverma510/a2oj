#include<bits/stdc++.h>
using namespace std;
int main(){
    int ** out = new int*[3];
    for(int i=0;i<3;i++){
        out[i] = new int[3];
        for(int j=0;j<3;j++)
            out[i][j] = 1;
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            int temp;
            cin>>temp;
            if(temp%2==1){
                out[i][j] = 1 - out[i][j];
                if(i-1 >= 0)
                    out[i-1][j] = 1 - out[i-1][j];
                if(j+1<3)
                    out[i][j+1] = 1 - out[i][j+1];
                if(i+1<3)
                    out[i+1][j] = 1 - out[i+1][j];
                if(j-1>=0)
                    out[i][j-1] = 1 - out[i][j-1];
            }
        }
    }
    for(int i=0;i<3;i++){
        string res = "";
        for(int j=0;j<3;j++)
            res = res + to_string(out[i][j]);
        cout<<res<<"\n";
    }
    return 0;
}