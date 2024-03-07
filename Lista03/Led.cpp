#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int n_cases;
    cin >> n_cases;
    for(int i = 0; i < n_cases; i++){
        char num[1000];
        cin >> num;
        int leds = 0;
        for(int j = 0; j < strlen(num); j++){
            if (num[j] == '1'){
                leds += 2;
            }
            else if (num[j] == '2'){
                leds += 5;
            }
            else if (num[j] == '3'){
                leds += 5;
            }
            else if (num[j] == '4'){
                leds += 4;
            }
            else if (num[j] == '5'){
                leds += 5;
            }
            else if (num[j] == '6'){
                leds += 6;
            }
            else if (num[j] == '7'){
                leds += 3;
            }
            else if (num[j] == '8'){
                leds += 7;
            }
            else if (num[j] == '9'){
                leds += 6;
            }
            else if (num[j] == '0'){
                leds += 6;
            }
        }
        cout << leds << " leds" << endl;
    }
    return 0;
}