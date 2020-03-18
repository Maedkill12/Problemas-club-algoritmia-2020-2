#include <bits/stdc++.h>
 
using namespace std;
 
uint64_t pow(uint64_t base, uint64_t exp,uint64_t mod){
    if(exp == 0)
    	return 1;
    return (pow((base*base)%mod, exp/2, mod)*(exp&1?base:1))%mod;
}
 
int main()
{
    uint64_t a, b;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a >> b;
        cout << pow(a,b,10)<<endl;
    }
    return 0;
}
