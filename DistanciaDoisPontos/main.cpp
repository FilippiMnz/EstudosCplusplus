#include <stdio.h>
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main(){
    double x1, x2, y1, y2, X, Y, dist;
    cin >> x1 >> y1 >> x2 >> y2;
    X = x2 -x1;
    Y = y2 - y1;
    dist = sqrt(pow(X,2)+pow(Y,2));
    std::cout << std::fixed << std::setprecision(4);
    cout << dist << endl;

    return 0;
}