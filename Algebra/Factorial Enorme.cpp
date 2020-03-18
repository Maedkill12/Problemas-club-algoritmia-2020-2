#include <bits/stdc++.h>

using namespace std;

int main(){
    double l = 0;
    long numero, digitos;
    cin >> numero;
    for(long i=1; i<=numero; i++){
        l += log10(i);
    }
    digitos = (long) l;
    digitos++;
    cout << numero << "!" << " tiene " << digitos << " digitos"<< endl;
    return 0;
}
