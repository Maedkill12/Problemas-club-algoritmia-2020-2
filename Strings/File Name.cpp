#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, contador = 0, caracteres = 0;
    bool bandera = false;
    string file;
    cin >> n >> file;
    for(int i=0; i<file.size(); i++){
        if(bandera){
            if(file[i] == 'x'){
                contador++;
            }else{
                contador = 0;
                bandera = false;
            }
        }else{
            if(file[i] == 'x'){
                bandera = true;
                contador++;
            }else{
                contador = 0;
                bandera = false;
            }
        }
        if(contador >= 3){
            caracteres++;
        }
    }
    cout << caracteres << endl;
    return 0;
}
