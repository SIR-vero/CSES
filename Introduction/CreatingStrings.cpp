#include<bits/stdc++.h>
using namespace std;
#define ll long long
int freq[26] = {0};
int cuse[26] = {0};
set<string> ans;
int n;

void solve(int pos, string s){
	if (pos == n+1){
		if (ans.count(s) == 0){
			//cout << "\t\t" << pos << endl;
			ans.insert(s);
		}
		return;
	}
	
	//cout << "\t\t" << s << endl;
	string ss;
	for(int i = 0; i < 26; i++){
		if(freq[i] != 0){
			for(int j = 0; j < freq[i]; j++){
				if (cuse[i]<freq[i]){
					ss = s + (char(i + 'a'));
					//s += (char(i + 'a'));
					cuse[i]++;
					solve(pos+1, ss);
					cuse[i]--;
				}
			}
		}
	}
}

int main(){
	string s;
	cin >> s;
	n = s.size();
	for(auto i : s)
		freq[i-'a']++;
	solve(1, "");
	cout << ans.size() << endl;
	for(auto i : ans)
		cout << i << endl;
}