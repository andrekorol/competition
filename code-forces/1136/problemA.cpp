#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie();

    unsigned short n;
    int l, r;
    vector<vector<int>> chapters;
    cin >> n;
    int num_chapters = n;
    while (n--) {
        cin >> l >> r;
        chapters.push_back({l, r});
    }
    int k;
    cin >> k;
    int not_read = num_chapters;
    for (auto const &pages : chapters)
        if (k > pages[0] && k > pages[1])
            not_read--;
    cout << not_read << '\n';

    return 0;
}
