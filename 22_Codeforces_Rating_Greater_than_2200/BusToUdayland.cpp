#include <bits/stdc++.h>
using namespace std;
int main() {
    char ch;
    vector<string> v;
    bool flag = false;
    int n;
    cin >> n;
    cin.get(ch);
    while (n--) {
        string s;
        getline(cin, s);
        if (!flag && (s[0] == 'O' && s[1] == 'O')) {
            s[0] = '+';
            s[1] = '+';
            flag = true;
        }
        else if (!flag && (s[3] == 'O' && s[4] == 'O')) {
            s[3] = '+';
            s[4] = '+';
            flag = true;
        }
        v.push_back(s);
    }
    if (flag) {
        cout << "YES\n";
        for (auto i: v) {
            cout << i << "\n";
        }
    }
    else {
        cout << "NO\n";
    }
    return 0;
}