#include <iostream>
#include <queue>
 
using namespace std;
 
int main(){
    int n, i;
    queue<int> deck, discard;
    cin >> n;
    while(n!=0){
        //if(n > 50) n -= 51;
        for (i = 1; i <= n; i++)
            deck.push(i);
        while(deck.size()>=2){
            discard.push(deck.front());
            deck.pop();
            deck.push(deck.front());
            deck.pop();
        }   
        cout << "Discarded cards: ";
        for (i = 0; i < n-2; ++i){
            cout << discard.front() << ", ";
            discard.pop();
        }
        if(!discard.empty()){
            cout << discard.front();
            discard.pop();
        }
        cout << endl;
        cout << "Remaining card: " << deck.front() << endl;
        if(!deck.empty()) deck.pop();
        cin>>n;
    }
    return 0;
}