#include <iostream>

using namespace std;

int main() {
    int a1, a0, c, n0;
    cin >> a1 >> a0 >> c >> n0;

    for (int n = n0; n <= 100; n++) {
        if (a1 * n + a0 > c * n) {
            cout << 0 << '\n';
            return 0;
        }
    }

    cout << 1 << '\n';
    return 0;
}
