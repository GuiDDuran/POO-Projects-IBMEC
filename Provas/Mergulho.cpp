#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n, r;
        cin >> n >> r;

        vector<int> mergulharam(n);
        for (int j = 0; j < n; j++) {
            mergulharam[j] = j + 1;
        }

        vector<int> retornaram(r);
        for (int k = 0; k < r; k++) {
            cin >> retornaram[k];
        }

        for (int l = 1; l <= n; l++) {
            if (find(retornaram.begin(), retornaram.end(), l) == retornaram.end()) {
                cout << l << " ";
            }
            else{
                cout << "*" << endl;
                break;
            }
        }
        cout << endl;
    }

    return 0;
}