#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ll n, m;
	cin >> n >> m;
	ll temp;
	set<ll> price;
	map<ll, ll> freq;
	for(int i = 0; i < n; i++){
		cin >> temp;
		price.insert(temp);
		freq[temp]++;
	}
	vector<ll> call(m);
	for(int i = 0; i < m; i++)
		cin >> call[i];
	
	for(ll x : call){
		auto el = price.upper_bound(x);
		if (el == price.begin()){
			cout << -1 << endl;
			continue;
		}
		el--;
		if (el == price.end())
			cout << -1 << endl;
		else {
			cout << *el << endl;
			freq[*el]--;
			if (freq[*el] == 0)
				price.erase(el);
		}
	}
}