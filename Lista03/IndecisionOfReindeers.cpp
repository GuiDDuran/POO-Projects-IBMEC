#include <iostream>

using namespace std;

int main(){
    string reindeers[] = {"Dasher", "Dancer", "Prancer", "Vixen", "Comet", "Cupid", "Donner", "Blitzen", "Rudolph"};
    int snowballs[9];
    int total = 0;

    for(int i = 0; i < 9; i++){
        cin >> snowballs[i];
        total += snowballs[i];
    }

    int winner = (total % 9) - 1;
    if (winner < 0){
        winner = 8;
    }

    cout << reindeers[winner] << endl;
    
    return 0;
}