#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	int ans = 1;
	int c = 1;
	for(int i = 1; i < s.size(); i++){
		if (s[i] != s[i-1]){
			if (c > ans)
				ans = c;
			c = 1;
		}
		else
			c++;
	}
	if (c > ans)
		ans = c;
	cout << ans;
}