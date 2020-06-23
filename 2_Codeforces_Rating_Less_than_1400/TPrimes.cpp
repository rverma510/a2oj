#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    bool prime[1000001];
    memset(prime, true, sizeof(prime));
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= 1000000; i++) {
        if(prime[i]) {
            for (int j = i * i; j <= 1000000; j += i)
                prime[j] = false;
        }
    }
    int n;
    cin>>n;
    while (n--) {
        ll x;
        cin>>x;
        double sqrt_x = sqrt(x);
        if (sqrt_x - ll(sqrt_x) == 0 && prime[(ll)sqrt_x])
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}