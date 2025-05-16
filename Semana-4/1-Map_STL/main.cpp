//Nesse código, vamos ver como usar o map do STL

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
    int num_queries;
    cin >> num_queries;
    map<string, int> mapa;
    //o mapa string e o nome do aluno e o int e a nota

    for(int i = 0; i < num_queries; i++){
        string nome;
        int nota;
        cin >> nome >> nota;
        mapa[nome] = nota;

        if (nota==1){
            int marcas;
            cin >> marcas;
            mapa[nome] += marcas;
        }
        else if (nota==2){
        mapa.erase(nome);
        }else if (nota==3){
        cout << mapa[nome] << endl;
        }
    }   
    return 0;
}