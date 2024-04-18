#include <iostream>

using namespace std;

int main() {
    string n;
    cin >> n;
    for (int i = n.size() - 1; i >= 0; i--) {
        if ((n[i] - '0') % 2 == 0) {
            cout << n[i];
        }
    }
    return 0;
}