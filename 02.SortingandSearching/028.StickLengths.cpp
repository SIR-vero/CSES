#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ll n;
	cin >> n;
	ll p[n];
	ll min = 1000000001;
	ll max = 0;
	for(int i = 0; i < n; i++){
		cin >> p[i];
		if(p[i] < min)
			min = p[i];
		if(p[i] > max)
			max = p[i];
	}
	ll left = min, right = max;
	ll ans1 = 0, ans2 = 0;
	bool found = 0;
	while(left < right){
		ll x1 = (left+right)/2;
		ll x2 = x1+1;
		ans1 = 0; ans2 = 0;
		for (int i = 0; i < n; i++){
			ans1 = ans1 + abs(x1-p[i]);
			ans2 = ans2 + abs(x2-p[i]);
		}
		if (ans1 < ans2)
			right = x1;
		else if (ans1 > ans2)
			left = x2;
		else{
			found = 1;
			break;
		}
	}
	if(found)
		cout << ans1;
	else{
		ll ans = 0;
		for(int i = 0; i < n; i++)
			ans = ans + abs(left - p[i]);
		cout << ans;
	}
}