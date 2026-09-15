#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int G, P;
    if (cin >> G >> P) {
        if (G > P) {
            cout << "El negocio si va a jalar\n";
            cout << (G - P) << "\n";
        }
        else {
            cout << "Dejalo ya esta muerto\n";
            cout << (P - G) << "\n";
        }
    }

    return 0;
}