#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, custoPorDia, i, maior, nivel, tAc;
    vector<int> anterior;
    while(cin >> n){
        maior = 0;
        nivel = 1;
        vector<int> lucros(n, 0);
        cin >> custoPorDia;
        for (i = 0; i < n; ++i){
            cin >> lucros[i];
            lucros[i] -= custoPorDia;
            if(lucros[i] > maior) maior = lucros[i];
        }
        anterior = lucros;
        for(/*i = n*/; i > 0; --i){
            tAc = n - nivel;
            vector<int> atual(tAc, 0);
            for(int j = 0; j < tAc; ++j){
                atual[j] = anterior[j] + lucros[j + nivel];
                if (atual[j] > maior) maior = atual[j];
            }
            anterior = atual;
            nivel++;
        }
        cout << maior << endl;
    }
    return 0;
}