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
ll solveDP(ll n, ll k) {
    vector<vector<ll>> dp(k + 1, vector<ll>(n + 1, 0));
    for (ll i = 1; i <= n; i++) dp[1][i] = 1;
    for (ll i = 2; i <= k; i++) {
        for (ll j = 1; j <= n; j++) {
            for (ll l = j; l <= n; l += j) {
                dp[i][l] = (dp[i][l] + dp[i - 1][j]) % mod;
            }
        }
    }
    ll ans = 0;
    for (ll i = 1; i <= n; i++) {
        ans = (ans + dp[k][i]) % mod;
    }
    return ans;
}
int main() {
    ll n, k;
    cin >> n >> k;
    // vector<vector<ll>> mem(n + 1, vector<ll>(k + 1, -1));
    // ll ans = solve(1, n, k, mem);
    ll ans = solveDP(n, k);
    cout << ans << "\n";
    return 0;
}