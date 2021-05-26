#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	string s;
	cin >> s;
	int freq[30] = {0};
	for(auto i : s)
		freq[i - 'A']++;
	if (s.size() % 2 == 1){
		int odd = 0;
		string f;
		char c;
		int oddF = 0;
		for(int i = 0; i < 26; i++){
			if (freq[i]%2 == 1){
				odd++;
				c = (char)(i + (int)'A');
				oddF = freq[i];
				if (odd > 1)
					break;
			}
			else
				for(int j = 0; j < freq[i]/2; j++)
					f += (char)(i + (int)'A');
		}
		if (odd == 1){
			cout << f;
			for(int i = 0; i < oddF; i++)
				cout << c;
			reverse(f.begin(), f.end());
			cout << f;
		}
		else 
			cout << "NO SOLUTION";
	}
	else {
		int odd = 0;
		string f;
		for(int i = 0; i < 26; i++){
			if (freq[i]%2 == 1){
				odd++;
				break;
			}
			else
				for(int j = 0; j < freq[i]/2; j++)
					f += (char)(i + (int)'A');
		}
		if (odd == 0){
			cout << f;
			reverse(f.begin(), f.end());
			cout << f;
		}
		else 
			cout << "NO SOLUTION";
	}
}