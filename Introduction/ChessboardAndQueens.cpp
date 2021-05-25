#include<bits/stdc++.h>
using namespace std;
#define ll long long
set<pair<int, int> > invalid;
set<int> majD;	//diff same row-col
set<int> minD;	//sum same
set<int> row;
set<int> column;
ll ans = 0;

bool safe(int r, int c){
	if (invalid.count(make_pair(r, c)) == 1 || majD.count(r-c) == 1 || minD.count(r+c) == 1 || row.count(r) == 1 || column.count(c) == 1)
		return false;
	return true;
}

void solve(int col){
	for(int i = 0; i < 8; i++){
		if(safe(i, col)){
			majD.insert(i-col);
			minD.insert(i+col);
			row.insert(i);
			column.insert(col);
			if (col == 7)
				ans++;
			else
				solve(col+1);
			majD.erase(majD.find(i-col));
			minD.erase(minD.find(i+col));
			row.erase(row.find(i));
			column.erase(column.find(col));
		}
	}
}

int main(){
	string s;
	for(int i = 0; i < 8; i++){
		cin >> s;
		for(int j = 0; j < 8; j++)
			if(s[j] == '*')
				invalid.insert(make_pair(i, j));
	}
	solve(0);
	cout << ans << endl;
}