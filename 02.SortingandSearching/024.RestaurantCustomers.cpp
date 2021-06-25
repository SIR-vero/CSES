#include<bits/stdc++.h>
#define ll long long
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main(){
	FAST
	ll n;
	cin >> n;
	set<ll> time;
	map<ll, int> freqa;
	map<ll, int> freqb;
	ll a, b;
	for(int i = 0; i < n; i++){
		cin >> a >> b;
		time.insert(a);
		time.insert(b);
		freqa[a]++;
		freqb[b]++;
	}
	ll ans = 0;
	ll currans = 0;
	for(ll x : time){
		currans += freqa[x] - freqb[x];
		//cerr << "\t\t" << "freqa[x], freqb[x], currans: " << freqa[x] << " "<< freqb[x] << " " << currans << endl;
		if (currans > ans)
			ans = currans;
	}
	cout << ans << endl;
}
