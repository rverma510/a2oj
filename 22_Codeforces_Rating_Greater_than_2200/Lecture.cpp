#include <bits/stdc++.h>
using namespace std;
int main() {
    unordered_map<string, string> mp;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        string key, value;
        cin >> key >> value;
        mp[key] = value;
    }
    string res = "";
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        if (s.size() <= mp[s].size()) {
            res += s;
        }
        else {
            res += mp[s];
        }
        res += ' ';
    }
    cout << res << "\n";
    return 0;
}