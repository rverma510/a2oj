#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, one = 0, zero = 0;
    cin >> n;
    char ch; cin.get(ch);
    string s;
    getline(cin, s);
    for (auto i: s) {
        if (i == '0')
            zero++;
        else
            one++;
    }
    cout << abs(one - zero) << "\n";
    return 0;
}