#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef vector<int> vi;

int main(int argc, char *argv[])
{
    int n, i;
    cin >> n;
    vi V, U;
    while (cin >> i) V.push_back(i);
    sort(V.begin(), V.end());
    if (V[n - 1] == V[n]) puts("NO");
    else puts("YES");

    return 0;
}
