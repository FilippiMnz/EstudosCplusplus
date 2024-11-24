#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

class Solution{
    public: 
        std::vector<int> TwoNumbers(vector<int> & l1, vector<int> & l2){
            int n = l1.size() - 1;
            int m = l2.size() - 1;
            vector<int> Sum;
            std::reverse(l1.begin(), l1.end());
            std::reverse(l2.begin(), l2.end());
            for(int i = 0; i< l1.size(); i++){
                //pushback para adicionar novos elementos ao vetor sem alterar os ja existentes
                Sum.push_back(l1[i] + l2[i]);
            }
            return Sum;
        }
       
};

int main(){
    Solution Sol;
    vector<int> lista1 = {2,4,3};
    vector<int> lista2 = {3,4,1};
    int tamanho = lista1.size();
    int n = sizeof(lista1) / sizeof(lista1[0]);

    vector<int> result = Sol.TwoNumbers(lista1,lista2);
    for(int i = 0; i < result.size(); i++ ){
        cout << result[i] << endl;
    }
    return 0;
}