#include <iostream>

using namespace std;

void f(int x){
    if(x >= 0){
        f(x-1);
        cout << x << endl;
    }
}

int main(){
    int x;
    cin >> x;
    f(x);
    cout << "The program finished." << endl;
    return 0;
}