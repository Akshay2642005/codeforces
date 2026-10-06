#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int n, result = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b + c >= 2) {
            result++;
        }
    }

    cout << result << endl;
    return 0;
}