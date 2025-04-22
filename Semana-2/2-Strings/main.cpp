#include <iostream>
#include <string>

using namespace std;

int main(){
    string a, b;
    cin >> a >> b;

    //1) Tamanhos das strings
    cout << a.size() << " " << b.size() << endl;

    // Concatenar as strings
    cout << a + b << endl;

    // Trocar o primeiro caractere de a pelo primeiro caractere de b
    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    // Imprimir as strings modificadas
    cout << a << " " << b;
    // Imprimir o primeiro caractere de a e b
    //cout << a[0] << " " << b[0] << endl;

    return 0;
}