#include <iostream>
#include <cstring>

using namespace std;

int index_of(char* names[], int tam, char* name){
    for(int i = 0; i < tam; i++){
        if(strcmp(names[i], name) == 0) return i;
    }
    return -1;
}

int main(){
    int n, idC, in, pres, i;
    cin >> n;
    while(n!=0){
        char* names[n];
        char cara[13];
        for(int j = 0; j < n; j++)
            names[j] = new char[13];
        int saldo[n];
        for(i = 0; i < n; i++){
            cin >> names[i];
            saldo[i] = 0;
        }
        for(i = 0; i < n; i++){
            cin >> cara;
            idC = index_of(names, n, cara);
            cin >> in;
            cin >> pres;
            if(pres!=0 && idC >= 0) saldo[idC] -= (in/pres)*pres;
            for(int j = 0; j < pres; j++){
                cin >> cara;
                idC = index_of(names, n, cara);
                if(pres!=0 && idC >= 0) saldo[idC] += in/pres; //apesar de que nunca será o caso de pres == 0
            }
        }
        for(i=0; i < n; i++){
            cout << names[i] << " " << saldo[i] << endl;
        }
        cout << endl;
        for(int j = 0; j < n; j++)
            delete names[j];
        cin >> n;
    }
    return 0;
}
