#include <iostream>
#include <array>
#include <iomanip>
#include <stdio.h>
#include <math.h>
#include <vector>
#include <fstream>

using namespace std;

int main(){

    vector<int> Lista1;
    vector<int> Lista2;
    int num;
    ifstream arquivo("numbers.txt");
    while(arquivo >> num){
        Lista1.push_back(num);
        if(arquivo >> num){
            Lista2.push_back(num);
        }
    }
    arquivo.close();

    vector<int> Lista3(Lista1.size());


    
    //Ordenação dos arrays
    int tamanho = Lista1.size(), prev, next, aux1, aux2;

    for(int i = 0 ; i < tamanho; i++){
        for(next = i + 1; next < tamanho; next ++){
            aux1 = Lista1[i];
            aux2 = Lista2[i];
            if(Lista1[next] <Lista1[i]){
                Lista1[i] = Lista1[next];
                Lista1[next] = aux1;
            }
            if(Lista2[next] < Lista2[i]){
                Lista2[i] = Lista2[next];
                Lista2[next] = aux2;
            }

        }
    }

    //comparação Listas
    for(int i = 0; i < tamanho; i++){
        Lista1[i];
    }
    //operacao diferenca
    for(int j = 0; j< tamanho; j++){
        Lista3[j] = Lista1[j] - Lista2[j];
        if(Lista3[j] < 0){
            Lista3[j] *=-1;
        }
    }
    int soma = 0;
    for(int i = 0; i < tamanho; i++){
        soma +=  Lista3[i];
    }
   
    cout << "Lista 4" <<endl;
    cout << soma;

    
    cout << endl;
    
    return 0;
}