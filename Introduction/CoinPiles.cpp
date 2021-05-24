#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		ll a, b;
		cin >> a >> b;
		ll m = max(a, b);
		ll mi = min(a, b);
		if((m - mi == 1 && m % 3 == 2 && mi % 3 == 1)||(m - mi == 0 && m % 3 == 0 && mi % 3 == 0))
			cout << "YES\n";
		else {
			ll diff = m - mi;
			while(diff > 1 && mi > 0){
				if (diff % 2 == 1){
					m = m - (diff - 1);
					mi = mi - (diff/2);
				}
				else {
					m = m - diff;
					mi = mi - (diff/2);
				}
				diff = m - mi;
			}
			if (mi >= 0){
				if((m - mi == 1 && m % 3 == 2 && mi % 3 == 1)||(m - mi == 0 && m % 3 == 0 && mi % 3 == 0))
					cout << "YES\n";
				else 
					cout << "NO\n";
			}
			else {
				cout << "NO\n";
			}
		}
	}
}