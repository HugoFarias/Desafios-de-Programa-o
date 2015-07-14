#include <iostream>

using namespace std;

int main(){
	int players, actions;
	cin >> players >> actions;
	while(players != 0 || actions != 0){
		int guildas[players], score[players], wins=0, i, aux, pl1, pl2, kind, rG, oG;
		for (i = 0; i < players; ++i){
			cin >> score[i];
			guildas[i] = i;
		}
		for (i = 0; i < actions; ++i){
			cin >> kind >> pl1 >> pl2;
			if(guildas[pl1-1]!=guildas[pl2-1]){
				if(kind == 1){
					if(guildas[pl1-1]<guildas[pl2-1]){
						rG = guildas[pl1-1];
						oG = guildas[pl2-1];
						for (int i = 0; i < players; ++i)
							if(guildas[i]==guildas[pl2-1]) guildas[i] = guildas[pl1-1];
						//guildas[pl2-1] = guildas[pl1-1]; //E se uma guilda tiver vários membros.
					}else{
						rG = guildas[pl2-1];
						oG = guildas[pl1-1];
						for (int i = 0; i < players; ++i)
							if(guildas[i]==guildas[pl2-1]) guildas[i] = guildas[pl1-1];
						//guildas[pl1-1] = guildas[pl2-1];
					}
					score[rG] += score[oG];
				}else if(kind == 2){ //Prevenindo o caso de colocar um valor inválido de kind
					if(guildas[pl1-1]==0 || guildas[pl2-1]==0){ //Rafael is ever in the first
						if(guildas[pl2-1]==0){
							rG = pl2-1;
							oG = pl1-1;
						}else{
							rG = pl1-1;
							oG = pl2-1;
						}
						//cout << "Rafa em campo! Guilda: " << guildas[rG] << " score: " << score[guildas[rG]] << " outro: " << score[guildas[oG]] << endl;
						if(score[guildas[rG]] > score[guildas[oG]]) wins++;
					}
				}
			}
		}
		cout << wins << endl; //Sempre imprimo? Mesmo se perder? Mesmo se não lutar? Endl sempre, mesmo no final?
		cin >> players >> actions;
	}
	return 0;
}