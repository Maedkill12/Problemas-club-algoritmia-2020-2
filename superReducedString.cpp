#include <bits/stdc++.h>

using namespace std;

// Complete the superReducedString function below.
string superReducedString(string s) {
    string resultado = "";
    int pos = 0;
    while(pos < s.length()){
        if(s[pos] == s[pos+1]){
            pos += 2;
            if(pos < s.length()){
                resultado += s[pos];
            }
        }else{
            resultado += s[pos];
        }
        pos++;
    }
    if(resultado != ""){
        return resultado;
    }else{
        return "Empty String";
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s, result;
    getline(cin, s);
    result = superReducedString(s);
    for(int i=0; i<s.length(); i++){
       result = superReducedString(result);
    }
    fout << result << "\n";

    fout.close();

    return 0;
}
