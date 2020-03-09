#include <bits/stdc++.h>

using namespace std;

typedef set<string> conjunto;

int main(){
	vector<conjunto> digitos;
	priority_queue<int, vector<int>, greater<int>> numero;
	set<string> c;
	string cadena;
	int n, caso = 1;
	cin >> n;
	while(n != 0){
		for(int i=0; i<n; i++){
			cin >> cadena;
			int pos = 0;
			if(digitos.size()==0){
                c.insert(cadena);
                digitos.push_back(c);
			}else{
			    if(digitos[pos].count(cadena) == 0){
                    digitos[pos].insert(cadena);
			    }else{
                    if(pos < digitos.size()){
                        while(pos < digitos.size()){
                            if(digitos[pos].count(cadena) == 0){
                                digitos[pos].insert(cadena);
                                break;
                            }
                            pos++;
                        }
                        if(pos == digitos.size()){
                            c.clear();
                            c.insert(cadena);
                            digitos.push_back(c);
                        }
                    }else{
                        c.clear();
                        c.insert(cadena);
                        digitos.push_back(c);
                    }
			    }
			}
		}
		for(auto i=0; i<digitos.size(); i++){
            numero.push(digitos[i].size());
		}
		cout << "Case " << caso << ": ";
		while(!numero.empty()){
            cout << numero.top();
            numero.pop();
		}
		cout << endl;
		caso++;
        digitos.clear();
        c.clear();
		cin >> n;
	}
	return 0;
}

