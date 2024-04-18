#include <iostream>
#include <string>

using namespace std;

int main(){ 
    string palavra1, palavra2, palavra3, palavra4;
    int i = 0;
    cin >> palavra1 >> palavra2 >> palavra3 >> palavra4;
    palavra1[0] = tolower(palavra1[0]);
    palavra2[0] = tolower(palavra2[0]);
    palavra3[0] = tolower(palavra3[0]);
    palavra4[0] = tolower(palavra4[0]);
    if(palavra1[0] == palavra2[0] && palavra1[0] == palavra3[0] && palavra1[0] == palavra4[0]){
        cout << "Y" << endl;
    }else{
        cout << "N" << endl;
    }
}