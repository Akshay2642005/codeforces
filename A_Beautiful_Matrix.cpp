#include <cmath>
#include <iostream>

using namespace std;

void solve() {
    int row, col;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int x;
            cin >> x;

            if (x == 1) {
                row = i;
                col = j;
            }
        }
    }

    cout << abs(row - 2) + abs(col - 2) << endl;
}

int main() {
    solve();
    return 0;
}
