/*
bee 2413 - Pneu
Entrada Pressao desejada e pressão atual do pneu
Saida Diferença entre a pressão
result = A - B;
*/

#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
    int N, M, result;
    cin >> N >> M;
    if(N >= 1 && N <= 40 && M >= 1 && M <= 40){
        result = N - M;
        cout << result << endl;
    }
    else{
        return 0;
    }
    return 0;
}