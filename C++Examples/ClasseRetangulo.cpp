#include <iostream>

using namespace std;

class Retangulo{
    public:
        double largura;
        double comprimento;
    Retangulo(double largura, double comprimento){
        this -> largura = largura;
        this -> comprimento = comprimento;
    }

    double calcArea(){
        double area = largura * comprimento;
        return area;
    }

    double calcPerimetro(){
        double perimetro = 2 * (largura + comprimento);
        return perimetro;
    }
};

int main(){
    Retangulo retangulo1(5, 10);
    Retangulo retangulo2(10, 20);
    Retangulo retangulo3(20, 25);
    Retangulo retangulo4(30, 32);
    Retangulo retangulo5(2, 10);

    cout << "Area 1: " << retangulo1.calcArea() << endl;
    cout << "Perimetro 1: " << retangulo1.calcPerimetro() << endl;

    cout << "Area 2: " << retangulo2.calcArea() << endl;
    cout << "Perimetro 2: " << retangulo2.calcPerimetro() << endl;

    cout << "Area 3: " << retangulo3.calcArea() << endl;
    cout << "Perimetro 3: " << retangulo3.calcPerimetro() << endl;

    cout << "Area 4: " << retangulo4.calcArea() << endl;
    cout << "Perimetro 4: " << retangulo4.calcPerimetro() << endl;

    cout << "Area 5: " << retangulo5.calcArea() << endl;
    cout << "Perimetro 5: " << retangulo5.calcPerimetro() << endl;
    return 0;
}