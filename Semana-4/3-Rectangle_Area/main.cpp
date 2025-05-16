//Vamos criar a classe Retangulo, que deve ter os atributos largura e altura.
// A classe deve ter um método que calcula a área do retângulo.
// O método deve ser chamado calcularArea e deve retornar o valor da área.

#include <iostream>
using namespace std;

class Retangulo{
private:
    float largura;
    float altura;

public:
    Retangulo(float l, float a) : largura(l), altura(a) {}

    float calcularArea() {
        return largura * altura;
    }
};
int main() {
    float largura, altura;

    cout << "Digite a largura do retângulo: ";
    cin >> largura;
    cout << "Digite a altura do retângulo: ";
    cin >> altura;

    Retangulo retangulo(largura, altura);
    cout << "A área do retângulo é: " << retangulo.calcularArea() << endl;

    return 0;
}        