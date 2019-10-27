#include <bits/stdc++.h>
#define MAXN 10000000
using namespace std;

bool isPrime[MAXN+1];

void sieve(){
	for (int i = 0; i <= MAXN; ++i){
		isPrime[i] = 1;
	}
	isPrime[0] = isPrime[1] = 0;
	for (int i = 2; i*i <= MAXN; ++i){
		if (isPrime[i]){
			for (int j = i*i; j <= MAXN; j+=i) isPrime[j] = 0;
		}
	}
}

int main(){
	sieve();
	cout << isPrime[10] << " " << isPrime[17];
}
