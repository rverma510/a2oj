#include <bits/stdc++.h>
using namespace std;
int main() {
    double ans = 0, hs, hu;
    vector<double> m(5), w(5);
    vector<double> scores = {500, 1000, 1500, 2000, 2500};
    for (int i = 0; i < 5; i++) {
        cin >> m[i];
    }
    for (int i = 0; i < 5; i++) {
        cin >> w[i];
    }
    cin >> hs >> hu;
    for (int i = 0; i < 5; i++) {
        ans += max(0.3 * scores[i], (1 - m[i] / 250) * scores[i] - 50 * w[i]); 
    }
    ans += 100 * hs - 50 * hu;
    cout << ans << "\n";
    return 0;
}
