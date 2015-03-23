#include <iostream>
#include <stack>
 
using namespace std;
 
int main(){
    std::ios::sync_with_stdio(false); //aumenta o desempenho do iostream alem do stdio
 
    int n;
    cin >> n;
    while(n!=0){
        int i, vagoes, prox, j, aux;
        stack<int> estacao;
        cin >> vagoes;
        while(vagoes!=0){
            prox = 1;
            for (i = 0; i < n; i++){
                if(vagoes >= prox){
                    aux = vagoes-prox;
                    for(j = 0; j < aux; j++){
                        estacao.push(prox);
                        prox++;
                    }
                    prox++;
                }else //vagoes < prox
                    if(estacao.top() == vagoes)
                        estacao.pop();
                    else{
                        cout << "No\n";
                        aux = estacao.size();
                        for (j = 0; j < aux; j++)
                            estacao.pop();
                        break;
                    }
                if(i<n-1) cin >> vagoes;
            }
            if(i==n) cout << "Yes\n";
            else{
                for(j = i; j < n-1; ++j)
                    cin >> vagoes;
            }
            cin >> vagoes;
        }
        cout << endl;
        cin >> n;
    }
    return 0;
}