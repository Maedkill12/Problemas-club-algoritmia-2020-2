#include <bits/stdc++.h>

using namespace std;
//a = 97  A= 65   z=122   Z = 90 !@#$%^&*()-+ //holamundo
// Complete the minimumNumber function below.
int minimumNumber(int n, string password) {
    int caracteres = 0, contador=0;
    char arr[] = {'!','@','#','$','%','^','&','*','(',')','-','+'};
    bool minus = false, mayus = false, especial = false, digito = false;
    if(n < 6){
        caracteres = 6 - n;
    }
    for(int i=0; i<password.size(); i++){
        if(mayus == true && minus == true && especial == true && digito == true){
            break;
        }else{
            if(password[i] >= 48 && password[i] <= 57){
                digito = true;
            }else if(password[i] >= 65 && password[i] <= 90){
                mayus = true;
            }else if(password[i] >= 97 && password[i] <= 122){
                minus = true;
            }else if(!especial){
                for(int j=0; i<12; j++){
                    if(password[i] == arr[j]){
                        especial = true;
                        break;
                    }
                }        
            }    
        }
    }
    if(!digito){
        contador++;
    }
    if(!minus){
        contador++;
    }
    if(!mayus){
        contador++;
    }
    if(!especial){
        contador++;
    }
    if(contador > caracteres){
        caracteres = contador;
    }
    return caracteres;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string password;
    getline(cin, password);
    
    int answer = minimumNumber(n, password);

    fout << answer << "\n";

    fout.close();

    return 0;
}
