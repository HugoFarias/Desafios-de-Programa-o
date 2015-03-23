#include <stdio.h>
 
int main(){
    char in[201];
    scanf("%s", in);
    while(in[0] != '*'){
        int i = 0, rightCompass = 0, first;
        float compass = 2.0;
        while(in[i]!='\0'){
            switch(in[i]){
                case '/':
                if(compass == 1.0) rightCompass++;
                compass = 0.0;
                break;
                case 'W':
                compass += 1.0;
                break;
                case 'H':
                compass += 0.5;
                break;
                case 'Q':
                compass += 0.25;
                break;
                case 'E':
                compass += 0.125;
                break;
                case 'S':
                compass += 0.0625; 
                break;
                case 'T':
                compass += 0.03125;
                break;
                case 'X':
                compass += 0.015625;
                break;
                default:
                compass += 2.0;
            }
            i++;
        }
        printf("%d\n", rightCompass);;
        scanf("%s", in);
    }
    return 0;
}