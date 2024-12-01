#include <stdio.h> //C input output
#include <iostream> //C++ input output
#include <cmath>
#include <iomanip>


using namespace std;

int main() {
    double A, B, C, RA, RB, Delta;
    cin >> A >> B >> C;
    Delta = pow(B, 2) - 4 * A * C;
    
    std::cout << std::fixed << std::setprecision(5);
    if(A == 0){
        cout << "Impossivel calcular" <<endl;
    }else{
        if(Delta < 0){
        cout << "Impossivel calcular" << endl;
        }else{
            RA = (-B + sqrt(Delta)) / (2 * A);
            RB = (-B - sqrt(Delta)) / (2 * A);
            std::cout << std::fixed << std::setprecision(5);
            cout << "R1 = " << RA <<endl;
            cout << "R2 = " << RB <<endl;
        }
    }
    return 0;
}