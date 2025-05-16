//Vamos fazer um código para explicar o conceito de herança em C++.
//Vamos criar a classe triangulo, que deve exibir uma mensagem dizendo que é um triângulo.
//A partir dessa classe tringulo, vamos criar uma classe derivada chamada TrianguloIsosceles.

#include <iostream>

using namespace std;

class Triangulo {
private:
public: 
   void triangulo(){
    cout << "Eu sou um triangulo" << endl;
   }
};
class TrianguloIsosceles : public Triangulo {
private:
public:
   void trianguloIsosceles(){
    cout << "Eu sou um triangulo isosceles" << endl;
   }
};
int main(){
    TrianguloIsosceles isc;
    isc.triangulo();
    isc.trianguloIsosceles();
    return 0;
}
