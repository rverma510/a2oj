#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007 
typedef long long ll;
ll solve(ll prev, ll n, ll k, vector<vector<ll>> &mem) {
    if (k == 0) {
        return 1;
    }
    if (mem[prev][k] != -1)
        return mem[prev][k];
    ll ans = 0;
    for (ll i = prev; i <= n; i += prev) {
        ans += solve(i, n, k - 1, mem);
        ans %= mod;
    }
    return mem[prev][k] = ans % mod;
}
int main() {
    ll n, k;
    cin >> n >> k;
    vector<vector<ll>> mem(n + 1, vector<ll>(k + 1, -1));
    ll ans = solve(1, n, k, mem);
    cout << ans << "\n";
    return 0;
}