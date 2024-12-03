#include <iostream>              
#include <string>     
#include <bits/stdc++.h>           
using namespace std;

int ValorTrinomio(int N, int K) {
    if (N == 0 && K == 0) {
        return 1;
    }
    if (K < -N || K > N) {
        return 0;
    }
    return ValorTrinomio(N - 1, K - 1) + ValorTrinomio(N - 1, K) + ValorTrinomio(N - 1, K + 1);
}

void printTrinomio(int I) {
    for (int i = 0; i < I; i++) {
        for (int j = -i; j <= 0; j++) {
            cout << ValorTrinomio(i, j) << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << ValorTrinomio(i, j) << " ";
        }
        cout << endl;
    }
}

int SomaTrinomio(int N) {
    int soma = 0;
    for (int K = -N; K <= N; K++) {
        soma += ValorTrinomio(N, K);
    }
    return soma;
}

int main() {
    int I;
    cin >> I;

   // printTrinomio(I);
    if(I >= 0 && I <=20) {
    cout << SomaTrinomio(I) << endl;

    }
    else{
        return 0;
    }


    return 0;
}
