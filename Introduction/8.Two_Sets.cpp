#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll n;
	cin >> n;
	if (((n*(n+1))/2) % 2 == 0){
		cout << "YES\n";
		vector<int> f;
		vector<int> s;
		ll sum = ((n*(n+1))/2)/2;
		for (ll i = n; i >= 1; i--){
			if (i <= sum){
				f.push_back(i);
				sum -= i;
			}
			else 
				s.push_back(i);
		}
		cout << f.size() << endl;
		for (auto i : f)
			cout << i << " ";
		cout << endl;
		cout << s.size() << endl;
		for (auto i : s)
			cout << i << " ";
		cout << endl;
	 }
	 else 
		 cout << "NO\n";
}