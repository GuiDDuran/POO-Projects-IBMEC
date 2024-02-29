#include <iostream>

using namespace std;

int main(){
    int a, b, greater;
    cin >> a >> b;
    if (a > b){
        greater = a;
    } else{
        greater = b;
    }
    cout << greater << endl;
    return 0;
}