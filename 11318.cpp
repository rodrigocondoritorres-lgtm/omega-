#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int A, B;
    if (cin >> A >> B) {
        if (A + B == 5) {
            B += 3;
            cout << (2 * A + B) << "\n";
        }
        else {
            A -= 1;
            if ((7 * A + B) % 2 == 0) {
                cout << (A - B) << "\n";
            }
            else {
                cout << (A * B) << "\n";
            }
        }
    }

    return 0;
}