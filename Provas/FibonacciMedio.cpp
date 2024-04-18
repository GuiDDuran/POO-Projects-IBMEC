#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int num1 = 0, num2 = 0, num3 =2;
    for (int i = 0; i < n; i++){
        if(i == 0){
            cout << 0;
        }else if(i == 1){
            cout << " " << 0;
        }else if(i == 2){
            cout << " " << 2;
        }else{
            int prox = num1 + num2 + num3;
            cout << " " << prox;
            num1 = num2;
            num2 = num3;
            num3 = prox;
        }
    }
    cout << endl;
    return 0;
}