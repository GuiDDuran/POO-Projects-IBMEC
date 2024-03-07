#include <iostream>

using namespace std;

int main(){
    int factorial[] = {40320, 5040, 720, 120, 24, 6, 2, 1};
    int n;
    cin >> n;
    int result = 0;
    for (int f : factorial) {
        result += n / f;
        n %= f;
    }
    cout << result << endl;
    return 0;
}