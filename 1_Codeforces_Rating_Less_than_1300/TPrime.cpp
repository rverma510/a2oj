#include<bits/stdc++.h>
using namespace std;
int main(){
    bool prime[1000001];
    memset(prime, true, sizeof(prime));
    prime[0] = prime[1] = false;
    for(int i=2;i*i<=1000000;i++){
        if(prime[i]){
            for(int j=i*i;j<=1000000;j+=i)
                prime[j] = false;
        }
    }
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        long long int x;
        cin>>x;
        double res = sqrt(x);
        if(res - int(res) == 0 && prime[(int)res])
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}