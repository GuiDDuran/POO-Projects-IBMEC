#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int num1, num2, sum = num1 + num2, dif = num1 - num2, mult = num1 * num2, div = num1 / num2, exp1 = pow(num1, 2), exp2 = pow(num2, 2);
    cin >> num1 >> num2;
    cout << sum << endl << dif << endl << mult << endl << div << endl << exp1 << endl << exp2;
    return 0;
}