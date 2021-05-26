#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	set<int> s;
	int t;
	for(int i = 0; i < n; i++){
		cin >> t;
		s.insert(t);
	}
	cout << s.size();
}