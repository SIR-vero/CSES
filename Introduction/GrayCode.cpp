#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<int> ans;
	ans.push_back(0);
	ans.push_back(1);
	for(int i = 2; i <= n; i++){
		int add = pow(2, i-1);
		for(int j = ans.size()-1; j >= 0; j--)
			ans.push_back(add+ans[j]);
	}
	for(auto i : ans){
		string s;
		while(i){
			if (i % 2 == 0)
				s += '0';
			else 
				s += '1';
			i >>= 1;
		}
		int z = n - s.size();
		for(int j = 0; j < z; j++)
			cout << 0;
		reverse(s.begin(), s.end());
		cout << s << endl;
	}
}

/**
n = 1 
	0-(2^1-1)
n = 2
	2^(n-1)-2^(n)-1
*/