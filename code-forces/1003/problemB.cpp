#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, x;
    cin >> a >> b >> x;
    int n = a + b;
    string s;
    while (n--) {
        if ( (x) && (b) && (a) ) {
            if (!(n & 1)) {
                s += '0';
                --a;
            } else {
                s += '1';
                --b;
            }
        }
        else if (a) {
            s += '0';
            --a;
        } else {
            s += '1';
            --b;
        }       
    }
    cout << s << '\n';

    return 0;
}
