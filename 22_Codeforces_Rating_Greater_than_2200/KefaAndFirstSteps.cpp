#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, cnt = 1, tmp = 1;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (i == 0) continue;
        if (v[i - 1] <= v[i]) {
            tmp++;
        }
        else {
            cnt = max(cnt, tmp);
            tmp = 1;
        }
    }
    cnt = max(tmp, cnt);
    cout << cnt << "\n";
    return 0;
}