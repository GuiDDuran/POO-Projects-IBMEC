#include <iostream>

using namespace std;

int main(){
    int total_c, total_b, total_p, requested_c, requested_b, requested_p, missed = 0;
    cin >> total_c >> total_b >> total_p;
    cin >> requested_c >> requested_b >> requested_p;
    if (total_c < requested_c){
        missed += requested_c - total_c;
    }
    if (total_b < requested_b){
        missed += requested_b - total_b;
    }
    if (total_p < requested_p){
        missed += requested_p - total_p;
    }
    cout << missed << endl;
    return 0;
}