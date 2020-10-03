#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, pos_1{-1}, pos_n{-1};
    cin >> n;
    for (int i = 0; i < n; i++) {
        int tmp; cin >> tmp;
        if (tmp == 1) pos_1 = i;
        if (tmp == n) pos_n = i;
    }
    if (pos_1 < pos_n) {
        cout << max(pos_n, n - 1 - pos_1) << "\n";
    }
    else {
        cout << max(pos_1, n - 1 - pos_n) << "\n";
    }
    return 0;
}