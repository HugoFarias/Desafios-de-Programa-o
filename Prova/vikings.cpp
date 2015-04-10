#include <iostream>
#include <cstdio>

using namespace std;

void mudaO(char* alfabeto, int ind){
     char aux, cara;
     cara = alfabeto[ind];
     for(int i = ind; i > 0; i--){
             alfabeto[i] = alfabeto[i-1];
     }
     alfabeto[0] = cara;
}

int main(){
    int m, i, cont = 1, aux;
    string resp;
    string in;
    cin >> m;
    while(m != 0){
        char alfabeto[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
        for(i=0; i<m; i++){
            cin >> aux;
            in = alfabeto[aux-1];
            resp.append(in);
            mudaO(alfabeto, aux-1);
        }
        printf("Instancia %d\n%s\n\n", cont, resp.c_str());
        cont++;
        scanf("%d", &m);
        resp.clear();
    }
    return 0;
}

