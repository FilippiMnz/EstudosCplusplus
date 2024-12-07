/*
bee 2413
Busca na Internet
João fez uma pesquisa em seu site de busca predileto,
e encontrou a resposta que estava procurando no terceiro link listado.
Além disso, ele viu, pelo site, que t pessoas já haviam clicado neste link antes.
João havia lido anteriormente, também na Internet,
que o número de pessoas que clicam no segundo link listado é o dobro de número
de pessoas que clicam no terceiro link listado.
Nessa leitura, ele também descobriu que o número de pessoas que clicam no segundo
link é a metade do número de pessoas que clicam no primeiro link.

Entrada

Cada caso de teste possui apenas um número, t (1 ≤ t ≤ 1000), 
que representa o número de pessoas que clicaram no terceiro link da busca.
Saída

Para cada caso de teste imprima apenas uma linha, 
contendo apenas um inteiro, indicando quantas pessoas clicaram no primeiro link, 
nessa busca.


t = T * 4
*/

#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
    int T, result;
    cin >> T;
    if(T >= 1 && T <= 1000){
        result = T *4;
        cout <<result << endl;
    }
    else{
        return 0;
    }
    return 0;
}