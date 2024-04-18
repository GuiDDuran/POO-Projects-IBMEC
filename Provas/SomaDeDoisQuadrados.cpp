#include <iostream>

using namespace std;

int main() {
    while (true) {
        int n;
        cin >> n;
        if (n == 0) {
            break;
        }
        
        bool found = false;
        for (int num1 = 0; num1 * num1 <= n; num1++) {
            for (int num2 = 0; num2 * num2 <= n; num2++) {
                if (num1 * num1 + num2 * num2 == n) {
                    cout << "YES" << endl;
                    found = true;
                    break;
                }
            }
            if (found) {
                break;
            }
        }

        if (!found) {
            cout << "NO" << endl;
        }
    }

    return 0;
}