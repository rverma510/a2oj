#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> v = {6, 8, 4, 2};
    int n; 
    cin >> n;
    if (n == 0) 
        cout << 1 << "\n";
    else {
        n %= 4;
        cout << v[n] << "\n";
    }
    return 0;
}