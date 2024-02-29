#include <iostream>

using namespace std;

int main(){
    int t1, t2, t3, t4, num_devices;
    cin >> t1 >> t2 >> t3 >> t4;
    num_devices = (t1 + t2 + t3 + t4) - 3;
    cout << num_devices << endl;
    return 0;
}