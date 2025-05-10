#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

// Funcao para validar o nome de usuario
void validateUsername(const string& username) {
    // Verifica se o nome de usuario e muito curto
    if (username.length() < 6) {
        throw invalid_argument("Too short: " + to_string(username.length()));
    }

    // Verifica se o nome de usuario e invalido (caracteres nao permitidos)
    for (char ch : username) {
        if (!isalnum(ch)) {
            throw invalid_argument("Invalid");
        }
    }

    // Se passou nas verificacoes, o nome de usuario e valido
    cout << "Valid" << endl;
}

int main() {
    int t;
    cin >> t;  // Numero de casos de teste

    // Laco para ler cada nome de usuario e validar
    for (int i = 0; i < t; ++i) {
        string username;
        cin >> username;  // Le o nome de usuario

        try {
            validateUsername(username);  // Tenta validar o nome de usuario
        }
        catch (const invalid_argument& e) {
            cout << e.what() << endl;  // Caso haja uma excecao, imprime a mensagem
        }
    }

    return 0;
}
