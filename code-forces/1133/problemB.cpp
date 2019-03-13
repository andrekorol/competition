#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef vector<ull> vull;

int main() {
    ios::sync_with_stdio(false);
    cin.tie();

    int n, k;
    cin >> n >> k;
    vull boxes;
    int counter = n;
    ull d;
    while (counter--) {
        cin >> d;
        boxes.push_back(d);
    }
    int j, pairs = 0;
    for (int i = 0; i < n; ++i) {
         for (int j = 0; j < n; ++j) {
             if (boxes[i] == 0)
                 break;
             if(boxes[j] != 0 && i != j && (boxes[i] + boxes[j]) % k == 0) {
                 boxes[i] = 0;
                 boxes[j] = 0;
                 pairs++;
             }

         }
    }
    cout << pairs * 2 << '\n';

    return 0;
}
