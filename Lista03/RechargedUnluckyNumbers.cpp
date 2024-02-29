#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;
    string n_string = to_string(n);  // Convert the number n into a string using the function to_strin()
    if (n_string.find("13") != string::npos){  // The function .find is used to check if there is any '13' in the 'n_string' and if the '13' is not found it returns 'string::npos' which means that the value wasn't found.
        cout << n << " es de Mala Suerte" << endl;
    }
    else {
       cout << n << " No es de Mala Suerte" << endl;
    }
    return 0;
}
// Search: https://stackoverflow.com/questions/38406426/how-can-i-check-if-a-number-is-present-within-another-number-if-i-am-storing-the