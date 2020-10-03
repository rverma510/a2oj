#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    if (n & 1)
        cout << 0 << "\n";
    else {
        int l = (n / 2);
        l = l & 1 ? l - 1 : l - 2;
        int ans = (l - 2) / 2 + 1;
        cout << ans << "\n";
    }
    return 0;
}