#include <stdio.h>
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
class Solution{
    public: 
        int romanToInt(string s) {
            int n = s.length();
            char char_array[n+1];
            int numero = 0;
            strcpy(char_array, s.c_str());
            for(int i = 0; i < n; i++){
                if (i < n - 1) {
                if (s[i] == 'I' && (s[i + 1] == 'V' || s[i + 1] == 'X')) {
                    numero -= 1;
                    continue;
                }
                if (s[i] == 'X' && (s[i + 1] == 'L' || s[i + 1] == 'C')) {
                    numero -= 10;
                    continue;
                }
                if (s[i] == 'C' && (s[i + 1] == 'D' || s[i + 1] == 'M')) {
                    numero -= 100;
                    continue;
                }
            }
                switch(char_array[i]){
                    case 'I':
                        numero +=1;
                        break;
                    case 'V':
                        numero +=5;
                        break;
                    case 'X' :
                        numero +=10;
                        break;
                     case 'L':
                        numero +=50;
                        break;
                    case 'C':
                        numero +=100;
                        break;
                    case 'D' :
                        numero +=500;
                        break;
                    case 'M' :
                        numero +=1000;
                        break;
                    default:
                        break;
                }
                
            }
            cout << numero;
            return numero;
        }
};
int main(){
    Solution sol;
    string s = "MCMXCIV";
    int numero = sol.romanToInt(s);
    return 0;    
}