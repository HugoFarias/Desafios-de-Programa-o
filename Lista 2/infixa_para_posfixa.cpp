#include <stack>
#include <cstdio>
#include <cstring>
 
using namespace std;
 
int inline eh_op(char sym){
    return sym == '+' || sym == '-' || sym == '*' || sym == '/' || sym == '^';
}
 
int inline maiorPrioridade(char a, char b){
    if(a=='+' || a=='-')
        if(b=='+' || b=='-' || b=='(') return 1; //+ e - nao tem prioridade maior que ninguem a nao ser a si mesmos (=)
        else return 0;
    else if(a=='*' || a=='/')
        if(b=='^') return 0; //* e / so perdem para ^
        else return 1;
    else if(a=='^') return 1; //resta apenas ^, que sempre tem maior prioridade;
    return 0;
}
 
int main(){
    int n;
    scanf("%d", &n);
    for (int j = 0; j < n; j++){
        char in[301], saida[301] = "";
        stack<char> ops;
        int i, aux;
        scanf("%s", in);
        for (i = 0; in[i]!='\0'; i++){
            if(in[i] == '(') ops.push('(');
            else if(in[i] == ')'){
                while(ops.top()!='('){
                    sprintf(saida, "%s%c", saida, ops.top());
                    ops.pop();
                }
                ops.pop();
            }else if(eh_op(in[i])){
                while(!ops.empty() && maiorPrioridade(ops.top(), in[i])){
                    sprintf(saida, "%s%c", saida, ops.top());
                    ops.pop();
                }
                ops.push(in[i]);
            }else sprintf(saida, "%s%c", saida, in[i]); //operando
        }
        aux = ops.size();
        for (i = 0; i < aux; i++){
            sprintf(saida, "%s%c", saida, ops.top());
            ops.pop();
        }
        printf("%s\n", saida);
    }
    return 0;
}