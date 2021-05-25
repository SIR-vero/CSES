#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
	ll n;
	cin >> n;
	ll p[n];
	ll sum = 0;
	for(int i = 0; i < n; i++){
		cin >> p[i];
		sum += p[i];
	}
	ll ans = sum;
	for(int i = 1; i < pow(2, n)-1; i++){
		ll partialSum = 0;
		ll f = 1;
		for(int j = 0; j < n; j++){
			if (i & f)
				partialSum += p[j];
			f = f << 1;
			//cerr << "\t\t" << f << endl;
		}
		//cerr << "\t\t\t" << partialSum << endl;
		if (ans > abs((sum - partialSum)-partialSum))
			ans = abs((sum - partialSum)-partialSum);
	}
	cout << ans << endl;
}