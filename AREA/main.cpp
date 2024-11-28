#include <stdio.h>
#include <iostream>
#include <string> 
#include <iomanip> 
using namespace std;
int main() {
    double A, B, C, Triangulo, Circulo, Trapezio, Quadrado, Retangulo;
    double pi = 3.14159;
    std::cin >> A  >> B >> C;
    std::cout << std::fixed << std::setprecision(3);
    Triangulo = (A * C)/2;
    Circulo = pi*(C*C);
    Trapezio = ((A+B)*C)/2;
    Quadrado = B*B;
    Retangulo = A*B;
    cout << "TRIANGULO: " <<Triangulo << endl;
    cout << "CIRCULO: " << Circulo << endl;
    cout << "TRAPEZIO: " << Trapezio << endl;
    cout << "QUADRADO: " << Quadrado << endl;
    cout << "RETANGULO: " << Retangulo <<endl;
    return 0;
}