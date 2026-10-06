#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    if (n <= 2 || n % 2 != 0) {
        cout << "NO" << endl;
        return 0;
    }

    for (int i = 2; i < n; i += 2) {
        if (n - i > 0 && (n - i) % 2 == 0) {
            cout << "YES" << endl;
            return 0;
        }
    }
}
