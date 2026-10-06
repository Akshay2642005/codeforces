#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    int x = 0;
    while (n--) {
        string s;
        cin >> s;

        if (s.find("++") != string::npos)
            x++;
        else if (s.find("--") != string::npos)
            x--;
    }
    cout << x << endl;
    return 0;
}