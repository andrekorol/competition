#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, count = 0; cin >> n;
	float N = (float) n;
	for (int i = 1; i < n; ++i) {
		count += ((((N - i) / 2.0) - (long)((N - i) / 2.0) != 0.0) && ((N - i) / i));
	}
	cout << count << endl;
	
    return 0;
}
