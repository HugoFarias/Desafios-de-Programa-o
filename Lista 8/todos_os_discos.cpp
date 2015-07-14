#include <iostream>
#include <vector>
#include <map>

using namespace std;

struct package{
    int tag;
    vector<int> dependencies;
};

int main(){
    int n1, n2, d, i, x, y;
    cin >> n1 >> n2 >> d;
    while(n1 != 0 || n2 != 0 || d != 0){
        map<int, package> packs;
        for (i = 0; i < d; ++i){
            cin >> x >> y;
            if(packs.find(x) != packs.end()){ //se existe no map
                packs[x].dependencies.push_back(y);
            }else{
                package aux;
                aux.tag = x;
                aux.dependencies.push_back(y);
                //aux.dependencies(1, y);
                packs[x] = aux;
            }
        }
        //cout << packs[1].dependencies[0] << " " << packs[1].dependencies[1] << endl;
        cin >> n1 >> n2 >> d;
    }
    return 0;
}