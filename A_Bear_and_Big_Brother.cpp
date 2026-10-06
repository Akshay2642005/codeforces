#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

using ll = long long;

void solve() {
    int a, b, count = 0;
    cin >> a >> b;

    while (a <= b) {
        a *= 3;
        b *= 2;
        count++;
    }
    cout << count << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
