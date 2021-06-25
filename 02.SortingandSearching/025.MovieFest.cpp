#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<pair<int, int> > time(n);
	for(int i = 0; i < n; i++)
		cin >> time[i].second >> time[i].first;
	sort(time.begin(), time.end());
	int pend = -1;
	int ans = 0;
	for(int i = 0;i < n; i++){
		if (pend <= time[i].second){
			ans++;
			pend = time[i].first;
		}
	}
	cout << ans ;
}