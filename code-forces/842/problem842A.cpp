#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <string>
#include <typeinfo>

using namespace std;
typedef unordered_map<int,int> UM;

int main(int argc, char *argv[])
{
    int n, i, k = 0;
    UM uMap;
    cin >> n;
    while (cin >> i) {
	uMap.insert({i, k});
	++k;
    }
    int rep = k - uMap.size();
    cout << "rep = " << rep << endl;
    cout << "k = "  << k << endl;
        
    return 0;
}
