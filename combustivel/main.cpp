#include <stdio.h>
#include <iostream> 
#include <iomanip>

using namespace std;


int main() {
    int X;
    float Y;
    cin >> X >> Y;
    float Km = X / Y;
    std::cout << std::fixed << std::setprecision(3);
    cout << Km << " km/l" << endl;
    return 0;
}