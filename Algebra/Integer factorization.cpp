#include <bits/stdc++.h>
 
using namespace std;
 
typedef pair<uint64_t, uint64_t> factor;
 
int main(){
    uint64_t n, f, pot;
    vector<factor> factores;
    set<uint64_t> cantidad;
    cin >> n;
    while(n != 0){
        f = 2;
        pot = 0;
        if(n == 1){
            cout << "1^1" << endl;
            continue;
        }
        while(f <= sqrt(n)){
            if(n % f == 0){
                pot++;
                n /= f;
                if(cantidad.count(f) == 0){
                    cantidad.insert(f);
                    factores.push_back(make_pair(f,pot));
                }else{
                    factores.pop_back();
                    factores.push_back(make_pair(f,pot));
                }
                continue;
            }
            pot = 0;
            f++;
        }
        if(n > 1){
           if(n % f == 0){
                pot++;
                if(cantidad.count(f) == 0){
                    cantidad.insert(f);
                    factores.push_back(make_pair(f,pot));
                }else{
                    factores.pop_back();
                    factores.push_back(make_pair(f,pot));
                }
            }else{
                factores.push_back(make_pair(n, 1));
            }
        }
        for(auto i=factores.begin(); i != factores.end(); i++){
            cout << i->first << "^" << i->second<<" ";
        }
        cantidad.clear();
        factores.clear();
        cout << endl;
        cin >> n;
    }
    return 0;
}
