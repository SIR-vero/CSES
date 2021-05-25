#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll ans(ll n){
	if (n == 1)
		return 1;
	return 2*ans(n-1) + 1;
}

void moves(ll n){
	if (n % 2 == 1){
		cout << "1 3\n";
		if (n > 1){
			vector<pair<int, int> > ans;
			ans.push_back(make_pair(0, 2));
			int add = 2;
			for(int i = 2; i <= n; i++){
				if (add == 2){
					cout << "1 2\n";
					ans.push_back(make_pair(0, 1));
				}
				else {
					cout << "1 3\n";
					ans.push_back(make_pair(0, 2));
				}
				int x = ans.size()-1;
				for (int j = 0; j < x; j++){
					cout << (ans[j].first+add)%3+1 << " " << (ans[j].second+add)%3+1 << endl;
					ans.push_back(make_pair((ans[j].first+add)%3, (ans[j].second+add)%3));
				}
				add = (add == 2) ? 1 : 2;
			}
		}
	}
	else {
		cout << "1 2\n";
		vector<pair<int, int> > ans;
		ans.push_back(make_pair(0, 1));
		int add = 1;
		for(int i = 2; i <= n; i++){
			if (add == 2){
				cout << "1 2\n";
				ans.push_back(make_pair(0, 1));
			}
			else {
				cout << "1 3\n";
				ans.push_back(make_pair(0, 2));
			}
			int x = ans.size()-1;
			for (int j = 0; j < x; j++){
				cout << (ans[j].first+add)%3+1 << " " << (ans[j].second+add)%3+1 << endl;
				ans.push_back(make_pair((ans[j].first+add)%3, (ans[j].second+add)%3));
			}
			add = (add == 2) ? 1 : 2;
		}
	}
}

using namespace std;
int main(){
	ll n;
	cin >> n;
	cout << ans(n) << endl;
	moves(n);
}