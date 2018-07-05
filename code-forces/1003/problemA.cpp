#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

int main(int argc, char const *argv[])
{
    int n, i;
    cin >> n;
    vi V;
    while (cin >> i) V.push_back(i);
    int pockets = 0;
    for (i = 0; i < n; ++i) {
        int count = 1;
        for (int j = i + 1; j < n; ++j) 
            if (V[i] == V[j])
                ++count;
        if (count > pockets)
            pockets = count;
    }
    cout << pockets << '\n';

    return 0;
}
