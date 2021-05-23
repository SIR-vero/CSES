#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	cout << 0 << "\n";
	if (n >= 2){
		cout << "6\n";
		for (long long i = 3; i <= n; i++){
			long long ans = ((i*i)*(i*i-1))/2;
			long long invalid = (i*i)*4 - (3*i-2)*4;
			cout << ans - invalid << "\n";
		}
	}
}