#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	int n;
	cin >> n;
	ll a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a+n);
	ll res = 1;
	for(int i = 0; i < n && a[i] <= res; i++){
		res = res + a[i];
	}
	cout << res;
}