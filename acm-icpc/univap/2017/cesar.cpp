#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie();

    int n, shift;
    cin >> n;

    string s;
    while (n--) {
        cin >> s;
        cin >> shift;
        for (auto &c : s) {
            c -= 'A';
            c = (c - shift + 26) % 26;
            c += 'A';
        }
        cout << s << '\n';
    }

    return 0;
}
