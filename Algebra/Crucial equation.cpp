#include <iostream>
 
using namespace std;
 
uint64_t MCD(long a, long b){
    if(b == 0){
        return a;
    }
    return MCD(b, a%b);
}
 
int main()
{
    long t, a ,b ,c;
    cin >> t;
    for(long i=0; i<t; i++){
        cin >> a >> b >> c;
        if(c % MCD(a,b) == 0){
            cout << "Case " << i+1 << ": Yes" << endl;
        }else{
            cout << "Case " << i+1 << ": No" << endl;
        }
    }
    return 0;
}
