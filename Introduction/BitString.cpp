#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int mod97 = 1000000000 + 7;

ll expo(ll p, ll q){
	if (q == 0)
		return 1;
	long long z = 1;
	while(q){
		if (q % 2 == 1)
			z = (z*p)%mod97;
		p = (p*p)%mod97;
		q >>= 1;
	}
	return z;
}

int main(){
	ll n;
	cin >> n;
	cout << expo(2, n);
}