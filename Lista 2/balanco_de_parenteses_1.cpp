#include <cstdio>
#include <iostream>
#include <stack>
 
using namespace std;
 
int main(){
    string in;
    stack<char> pars;
    while(cin >> in){
        int i = 0;
        while(i<in.length()){
            if(in[i]=='('){
                pars.push('(');
            }else{
                if(in[i]==')' && !pars.empty() && pars.top()=='('){
                    pars.pop();
                }else{
                    if(in[i]==')' && pars.empty()){
                        pars.push(')');
                        break;
                    }
                }
            }
            i++;
        }
        if(pars.empty()) printf("correct\n");
        else printf("incorrect\n");
        for (int j = 0; j < pars.size(); j++)
            pars.pop();
    }
    return 0;
}