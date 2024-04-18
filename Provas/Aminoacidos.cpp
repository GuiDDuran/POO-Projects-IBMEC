#include <iostream>

using namespace std;

void traduz(string trinca){
    if(trinca == "UUU"){
        cout << "Phe" << " ";
    }else if(trinca == "CUU" || trinca == "UUA"){
        cout << "Leu" << " ";
    }else if(trinca == "AAG"){
        cout << "Lisina" << " ";
    }else if(trinca == "UCU"){
        cout << "Ser" << " ";
    }else if(trinca == "UAU"){
        cout << "Tyr" << " ";
    }else if(trinca == "CAA"){
        cout << "Gln" << " ";
    }
}

int main(){
    string rna;
    cin >> rna;
    for (int i = 0; i < size(rna); i += 3) {
        string trinca = rna.substr(i, 3);
        traduz(trinca);
    }
}