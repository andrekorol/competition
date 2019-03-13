#include <bits/stdc++.h>

using namespace std;

template<typename Out>
void split(const string &s, char delim, Out result) {
    stringstream ss(s);
    string item;
    while (getline(ss, item, delim))
        *(result++) = item;
}

vector<string> split(const string &s, char delim) {
    vector<string> elems;
    split(s, delim, back_inserter(elems));
    return elems;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie();

    string start, end;
    cin >> start >> end;

    int h1, m1;
    vector<string> start_tokens = split(start, ':');
    h1 = stoi(start_tokens[0]);
    m1 = stoi(start_tokens[1]);

    int h2, m2;
    vector<string> end_tokens = split(end, ':');
    h2 = stoi(end_tokens[0]);
    m2 = stoi(end_tokens[1]);

    int start_in_minutes = h1 * 60 + m1;
    int end_in_minutes = h2 * 60 + m2;
    int midpoint_in_minutes = (start_in_minutes + end_in_minutes) / 2;
    int h3 = (int) midpoint_in_minutes / 60;
    float midpoint_minutes = ((float) midpoint_in_minutes) / 60 - h3;
    int m3 = (int) round(midpoint_minutes * 60);

    string h3_str, m3_str;
    h3 < 10 ? h3_str = "0" + to_string(h3) : h3_str = to_string(h3);
    m3 < 10 ? m3_str = "0" + to_string(m3) : m3_str = to_string(m3);

    cout << h3_str << ':' << m3_str << '\n';

    return 0;
}
