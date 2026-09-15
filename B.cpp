#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    if (N > 0) {
        cout << "#+";
    }
    else if (N < 0) {
        cout << "#-";
    }
    else if (N == 0) {
        cout << "#0";
    }

    return 0;
}