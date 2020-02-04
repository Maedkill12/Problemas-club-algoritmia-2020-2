#include <bits/stdc++.h>

using namespace std;

long mcd(long num1, long num2){
	long divisor = 2, mcd = 1;
	while(divisor < abs(num1) && divisor < abs(num2)){
		if(num1 % divisor == 0 && num2 % divisor == 0){
			num1 /= divisor;
			num2 /= divisor;
			mcd *= divisor;
		}else{
			divisor++;
		}
	}
	return mcd;
}

int main(){
	long numR = 0, denR = 1, num, den, divisor;
	while(cin >> num){
		cin >> den;
		numR = numR*den + num*denR;
		denR = denR*den;
	}
	divisor = mcd(numR, denR);
	cout << numR/divisor << " / " << denR/divisor << endl;
}
