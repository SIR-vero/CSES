#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ll n, ans = 0;
	cin >> n;
	while(n){
		n = n/5;
		ans += n;
	}
	cout << ans;
}