#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll n, m, k;
	cin >> n >> m >> k;
	ll a[n];
	ll b[m];
	for(int i = 0; i < n; i++)
		cin >> a[i];
	for(int i = 0; i < m; i++)
		cin >> b[i];
	sort(a, a+n);
	sort(b, b+m);
	
//	for(int i = 0; i < n; i++)
//		cerr << a[i] << " ";
//	cout << endl;
//	for(int i = 0; i < m; i++)
//		cerr << b[i] << " ";
//	cout << endl;
	
	
	ll ans = 0;
	ll aps = 0, person = 0;
	while(person < n && aps < m){
		if (a[person] <= (b[aps] + k) && a[person] >= (b[aps] - k)){
			ans++;
			person++;
			aps++;
		}
		else if (a[person] > (b[aps]+k))
			aps++;
		else if (a[person] < (b[aps] - k))
			person++;
	}
	cout << ans << endl;
}