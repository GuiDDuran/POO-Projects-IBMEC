#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float a, b, c, d, average, e, new_average;
    cin >> a >> b >> c >> d;
    average = ((a * 2) + (b * 3) + (c * 4) + (d * 1)) / 10.0;
    cout << fixed << setprecision(1);
    cout << "Media: " << average << endl;
    if (average >= 7.0){
        cout << "Aluno aprovado." << endl;
    }
    else if (average < 5.0){
        cout << "Aluno reprovado." << endl;
    }
    else if (average >= 5.0 && average <= 6.9){
        cout << "Aluno em exame." << endl;
        cin >> e;
        cout << "Nota do exame: " << e << endl;
        new_average = (average + e) / 2.0;
        if (new_average >= 5.0){
            cout << "Aluno aprovado." << endl;
            cout << fixed << setprecision(1);
            cout << "Media final: " << new_average << endl;
        }
        else if (new_average < 5.0){
            cout << "Aluno reprovado." << endl;
            cout << fixed << setprecision(1);
            cout << "Media final: " << new_average << endl;
        }
    }
    return 0;
}