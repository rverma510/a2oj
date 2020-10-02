#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b, count_a = 0, count_b = 0;
    cin >> a >> b;
    for (int i = 1; i <= 6; i++) {
        if ( abs(a - i) < abs(b - i))
            count_a++;
        else if (abs(a - i) > abs(b - i))
            count_b++;
    }
    cout << count_a << " " << (6 - count_a - count_b) << " " << count_b << "\n";
    return 0;
}