#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	int n, x;
	cin >> n;
	ll ans = -2000000000000000;
	ll temp = 0;
	for(int i = 0; i < n; i++){
		cin >> x;
		temp = temp + x;
		if(temp > ans)
			ans = temp;
		if (temp < 0)
			temp = 0;
	}
	cout << ans << endl;
}