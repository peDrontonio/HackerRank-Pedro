#include <iostream>

// Classe Box representa uma caixa com três dimensões: comprimento, largura e altura.
class Box {
private:
    int length, breadth, height;  // Variáveis privadas que armazenam as dimensões da caixa.

public:
    // Construtor padrão que inicializa as dimensões da caixa com valor 0.
    // O construtor usa a lista de inicialização para atribuir valores às variáveis privadas.
    Box() : length(0), breadth(0), height(0) {}

    // Construtor com parâmetros que inicializa a caixa com os valores fornecidos.
    Box(int l, int b, int h) : length(l), breadth(b), height(h) {}

    // Construtor de cópia que cria uma nova instância de Box com as mesmas dimensões de outra caixa.
    Box(const Box &b) : length(b.length), breadth(b.breadth), height(b.height) {}

    // Funções de acesso para obter as dimensões da caixa.
    // Cada função retorna o valor correspondente à dimensão específica.
    int getLength() const { return length; }
    int getBreadth() const { return breadth; }
    int getHeight() const { return height; }

    // Função para calcular o volume da caixa.
    // O volume é dado pela multiplicação das três dimensões (comprimento * largura * altura).
    // A função retorna o resultado como um valor de tipo long long para evitar overflow.
    long long CalculateVolume() const {
        return static_cast<long long>(length) * breadth * height;
    }

    // Sobrecarga do operador < para comparação de volumes entre duas caixas.
    // Retorna verdadeiro se o volume da caixa atual for menor que o da outra caixa.
    bool operator<(const Box &b) const {
        return this->CalculateVolume() < b.CalculateVolume();
    }

    // Sobrecarga do operador << para permitir a impressão de uma instância de Box.
    // Imprime as dimensões da caixa separadas por espaço.
    friend std::ostream& operator<<(std::ostream &out, const Box &b) {
        out << b.length << " " << b.breadth << " " << b.height;
        return out;
    }
};

// Função principal do programa.
int main() {
    Box b1;  // Cria uma instância de Box com dimensões 0, 0, 0.
    Box b2(2, 3, 4);  // Cria uma instância de Box com dimensões 2, 3, 4.

    // Exibe as dimensões de b2.
    std::cout << "Comprimento de b2: " << b2.getLength() << std::endl;  // Deve retornar 2
    std::cout << "Largura de b2: " << b2.getBreadth() << std::endl;  // Deve retornar 3
    std::cout << "Altura de b2: " << b2.getHeight() << std::endl;  // Deve retornar 4
    std::cout << "Volume de b2: " << b2.CalculateVolume() << std::endl;  // Deve retornar 24

    // Compara b1 e b2 para verificar se b1 tem volume menor que b2.
    std::cout << (b1 < b2 ? "b1 e menor que b2" : "b1 nao e menor que b2") << std::endl;

    // Exibe as dimensões de b2 utilizando o operador sobrecarregado <<
    std::cout << "b2: " << b2 << std::endl;  // Deve imprimir: 2 3 4

    return 0;
}
// O programa demonstra o uso de classes, construtores, sobrecarga de operadores e encapsulamento em C++.
// Ele cria uma classe Box que representa uma caixa tridimensional e fornece métodos para manipular e comparar caixas.
// O uso de construtores permite inicializar objetos de forma conveniente, enquanto a sobrecarga de operadores
// facilita a comparação e impressão de objetos.
// O programa também ilustra o conceito de cópia de objetos, permitindo criar novas instâncias com as mesmas dimensões.
// A função main serve como ponto de entrada, onde instâncias da classe Box são criadas e manipuladas.
// O uso de variáveis privadas e funções de acesso garante que as dimensões da caixa sejam protegidas e acessíveis apenas através de métodos públicos.
// O programa é um exemplo prático de como aplicar conceitos de programação orientada a objetos em C++.
// O uso de long long para o volume evita problemas de overflow ao lidar com grandes dimensões.
// O programa é simples, mas demonstra conceitos fundamentais de POO, como encapsulamento, abstração e sobrecarga de operadores.