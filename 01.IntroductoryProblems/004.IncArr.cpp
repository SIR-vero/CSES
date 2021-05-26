#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin >> n;
	long long ans = 0;
	long long prev, temp;
	cin >> prev;
	for(int i = 0; i < n-1; i++){
		cin >> temp;
		if(temp < prev)
			ans+=(prev-temp);
		else 
			prev = temp;
	}
	cout << ans;
}