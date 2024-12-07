/*
bee 1930 
Três membros do time e o tecnico compraram cada um uma regua de tomadas, permintindo assim
ligar varios aparelhos na unica tomada do hotel; Eles também podem ligar uma regua na outra
para aumentar a quantida de tomadas disponiveis
determine o número máximo de aparelhos que podem ser conectados à energia num mesmo instante.

A entrada consiste de uma linha com 4 numeros inteiros T1, T2, T3,T4, indicando o numero de tomadas
de cada uma das 4 reguas(2<=T<=6)
*/

#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
    int T1, T2, T3, T4, result;
    cin >> T1 >> T2 >> T3 >> T4;
    if(T1 >=2 && T2 >=2 && T3>=2 && T4 >=2 && T1 <=6 && T2 <=6 && T3<=6 && T4 <=6 ){
        result = (T1-1)+(T2 -1)+(T3-1)+ T4;
        cout << result << endl;
    }
    else{
        return 0;
    }
    return 0;
}