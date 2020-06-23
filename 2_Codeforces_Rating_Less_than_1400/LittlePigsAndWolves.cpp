#include<bits/stdc++.h>
using namespace std;

int arr[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool helper(string s[], int i, int j, int n, int m) {
    for (int k = 0; k < 4; k++) {
        int newI = i + arr[k][0];
        int newJ = j + arr[k][1];
        if (newI < 0 || newI >= n || newJ < 0 || newJ >= m)
            continue;
        if (s[newI][newJ] == 'P') {
            s[i][j] = '.';
            s[newI][newJ] = '.';
            return true;
        }
    }
    return false;
}

int main() {
    int n, m;
    cin>>n>>m;
    string s[n];
    for (int i = 0; i < n; i++) {
        cin>>s[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (s[i][j] == 'W') {
                if (helper(s, i, j, n, m))
                    count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}