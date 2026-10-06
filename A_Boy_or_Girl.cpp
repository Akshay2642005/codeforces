#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>

using namespace std;

using ll = long long;

void solve() {
    unordered_set<char> unique_chars;
    string s;
    cin >> s;

    for (char c : s) {
        unique_chars.insert(c);
    }

    if (unique_chars.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
