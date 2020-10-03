#include <bits/stdc++.h>
using namespace std;
int main() {
    unordered_set<int> s;
    int n, cnt = 0;
    cin >> n;
    char ch; cin.get(ch);
    string st;
    getline(cin, st);
    for (auto i: st) {
        if (s.find(i) == s.end()) {
            s.insert(i);
        }
        else {
            cnt++;
        }
    }   
    if (26 - s.size() >= cnt)
        cout << cnt << "\n";
    else
        cout << -1 << "\n";

    return 0;
}