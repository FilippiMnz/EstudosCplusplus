#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

bool Verificador(const vector<int>& Linha) {
    if (Linha.size() < 2) return true;
    bool diminuindo = true, aumentando = true;

    for (size_t i = 1; i < Linha.size(); i++) {
        int diferenca = abs(Linha[i] - Linha[i - 1]);
        if (diferenca < 1 || diferenca > 3) return false;
        if (Linha[i] > Linha[i - 1]) diminuindo = false;
        if (Linha[i] < Linha[i - 1]) aumentando = false;
    }
    return aumentando || diminuindo;
}

int main() {
    vector<vector<int>> Listas;
    ifstream arquivo("numbers.txt");
    string Linhas;

    while (getline(arquivo, Linhas)) {
        vector<int> elementos;
        stringstream ss(Linhas);
        int numero;

        while (ss >> numero) {
            elementos.push_back(numero);
        }
        Listas.push_back(elementos);
    }
    arquivo.close();

    int contador = 0;
    for (const auto& Linha : Listas) {
        if (Verificador(Linha)) {
            contador++;
        }
    }

    cout << "Numero de listas validas: " << contador << endl;
    return 0;
}
