#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll n, x;
	cin >> n >> x;
	ll p[n];
	for(int i = 0; i < n; i++)
		cin >> p[i];
	sort(p, p+n);
	
	int ans = 0;
	int rear = n-1, frnt = 0;
	while(rear > frnt){
		if (p[rear]+p[frnt] <= x){
			ans++;
			rear--;
			frnt++;
		}
		else {
			ans++;
			rear--;
		}
	}
	if(rear == frnt)
		ans++;
	cout << ans << endl;
}