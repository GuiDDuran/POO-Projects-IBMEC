#include <iostream>

using namespace std;

int main(){
    int count;
    for(int i = 0; i < 5; i++){
        int num;
        cin >> num;
        if(num % 2 == 0){
            count++;
        }
    }
    cout << count << " valores pares" << endl;
}