#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll x, y, s;
    cin >> x >> y >> s;
    ll tmp = s - abs(x) - abs(y);
    if (tmp >= 0 && tmp % 2 == 0)
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;   
}