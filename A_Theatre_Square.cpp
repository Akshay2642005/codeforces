#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

using ll = long long;

void solve() {
    ll n, m, a;
    cin >> n >> m >> a;

    ll stonesN = (n + a - 1) / a;
    ll stonesM = (m + a - 1) / a;

    cout << stonesN * stonesM << endl;
}

int main() {
    solve();
    return 0;
}
