#include <bits/Stdc++.h>

using namespace std;

int main(){
    int a,b,c, maximo, m,n;
    cin >> a >> b >> c;
    if(a > b){
        if(a > c){
            maximo = a;
            if(b + c > a){
                cout << "0" << endl;
                return 0;
            }
            if(b > c){
                m = b;
                n = c;
            }else{
                m = c;
                n = b;
            }
        }else{
            maximo = c;
            if(a + b > c){
                cout << "0" << endl;
                return 0;
            }
            if(a > b){
                m = a;
                n = b;
            }else{
                m = b;
                n = a;
            }
        }
    }else{
        if(b > c){
            maximo = b;
            if(c + a > b){
                cout << "0" << endl;
                return 0;
            }
            if(a > c){
                m = a;
                n = c;
            }else{
                m = c;
                n = a;
            }
        }else{
            maximo = c;
            if(a + b > c){
                cout << "0" << endl;
                return 0;
            }
            if( a > b){
                m = a;
                n = b;
            }else{
                m = b;
                n = a;
            }
        }
    }
    int cont = 0;
    while(m+n <= maximo){
        cont++;
        m++;
    }
    cout << cont << endl;
    return 0;
}
