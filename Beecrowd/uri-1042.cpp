#include <iostream>

using namespace std;

int main(){
    int a, b, c, maior, meio, menor;
    cin >> a >> b >> c;
    if(a < b && a < c){
        menor = a;
        if(b > c){
            maior = b;
            meio = c;
        }
        else if(c > b){
            maior = c;
            meio = b;
        }
    }
    else if(b < a && b < c){
        menor = b;
        if(a > c){
            maior = a;
            meio = c;
        }
        else if(c > a){
            maior = c;
            meio = a;
        }
    }
    if(c < a && c < b){
        menor = c;
        if(b > a){
            maior = b;
            meio = a;
        }
        else if(a > b){
            maior = a;
            meio = b;
        }
    }
    cout << menor << endl;
    cout << meio << endl;
    cout << maior << endl;

    cout << endl;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    return 0;
}