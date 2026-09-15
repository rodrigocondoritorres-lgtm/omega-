#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long A, B, C;
    if (cin >> A >> B >> C) {
        if (A != B && A != C && B != C) {
            cout << "ELLA NO TE AMA\n";
        }
        else {
            cout << "ELLA TE AMA\n";
        }
    }

    return 0;
}