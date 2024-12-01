#include <iostream>              
#include <string>                

class Solution {
public:
    bool EhPalindromo(int X) {
        std::string numString = std::to_string(X);
        std::string numeroInvertido;

        for (size_t i = numString.size(); i-- > 0;) {
            numeroInvertido.push_back(numString[i]);
        }

        return (numeroInvertido == numString);
    }
};
int main()
{
    Solution Sol;
    int num = 0;
    std::cout << "Insira um numero inteiro: ";
    std::cin >> num;
    bool truque = Sol.EhPalindromo(num);
    std::cout << (truque ? "true" : "false") << std::endl;
    return 0;
}