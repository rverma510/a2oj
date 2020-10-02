#include <bits/stdc++.h>
using namespace std;
// bool palin(string s) {
//     for (int i = 0; i < s.size() / 2; i++) {
//         if (s[i] != s[s.size() - 1 - i])
//             return false;
//     }
//     return true;
// }
// void subsq(string s, int i, string t, string &res) {
//     if (s.size() == i) {
//         if (palin(t) && t.compare(res) > 0)
//             res = t;
//         return;
//     }
//     subsq(s, i + 1, t + s[i], res);
//     subsq(s, i + 1, t, res);
// }
int main() {
    string s;
    getline(cin, s);
    // string res = "";
    // subsq(s, 0, "", res);
    vector<int> v(26, 0);
    for (auto i: s) {
        v[i - 'a']++;
    }
    for (int i = 25; i >= 0; i--) {
        if (v[i] != 0) {
            cout << string(v[i], 'a' + i) << "\n";
            break;
        }
    }
    // cout << res << "\n";
    return 0;
}