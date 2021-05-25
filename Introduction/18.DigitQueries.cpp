#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll expo(ll p, ll q){
	if (q == 0)
		return 1;
	long long z = 1;
	while(q){
		if (q % 2 == 1)
			z = (z*p);
		p = (p*p);
		q >>= 1;
	}
	return z;
}

int main(){
	int q;
	cin >> q;
	while(q--){
		ll k;
		cin >> k;
		ll n = 1;
		ll prevsum = 0;
		ll sum = 0;
		while(sum < k){
			prevsum = sum;
			sum = prevsum + (9*n*expo(10, n-1));
			n++;
		}
		n--;
		
		
		//cerr << "\t\tn : " << n << endl;
		//cerr << "\t\tprevsum : " << prevsum << endl;
		k = k-prevsum;
		//cerr << "\t\tk : " << k << endl;
		ll number = (expo(10, n-1)-1) + (k/n);
		//cerr << "\t\tnumber : " << number << endl;
		if (k % n){
			number++;
			//cerr << "\t\tnumber : " << number << endl;
			ll dig = k%n;
			int x = n+1, ans;
			while(x != dig){
				ans = number%10;
				number = number/10;
				x--;
			}
			cout << ans << endl;
		}
		else 
			cout << number%10 << endl;
	}
}