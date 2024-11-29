#include <stdio.h>
#include <iostream> 
#include <vector>

using namespace std;


int main() {
    int T, A, B, C, D, E, j;
    j = 0;
    int Opc[5];
    cin >> T;
    cin >> A >> B >> C >> D >> E;
    Opc[0] = A; Opc[1] = B; Opc[2] = C; Opc[3] = D; Opc[4] = E;
    
    
    for(int i = 0; i < 5; i++){
        if(Opc[i] == T){
            j++;
        }
    }
    cout << j <<endl;
    return 0;
}