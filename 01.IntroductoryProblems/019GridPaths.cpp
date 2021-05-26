#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll ans = 0;
string s;
bool vis[8][8];

void solve(int i, int j, int mov){
	if (i > 7 || i <= 0 || j > 7 || j <= 0 || mov > 48 || vis[i][j])
		return;
	else if (i == 7 && j == 1 && mov != 48)
		return;
	else if(((i-1 <= 0 || vis[i-1][j])&&(i+1 > 7 || vis[i+1][j]))&&((j-1 > 0 && !vis[i][j-1])&&(j+1 <= 7 && !vis[i][j+1])))		//can't go up down but can go left and right.
		return;
	else if (((i-1 > 0 && !vis[i-1][j])&&(i+1 <= 7 && !vis[i+1][j]))&&((j-1 <= 0 || vis[i][j-1])&&(j+1 > 7 || vis[i][j+1])))	//can go up down but can't go left and right.
		return;
	else if (i == 7 && j == 1 && mov == 48){
		ans++;
		return;
	}
	//cerr << "\t\t i: " << i << " j: " << j << endl;
	vis[i][j] = true;
	if(s[mov] != '?'){
		if (s[mov] == 'U')
			solve(i-1, j, mov+1);
		else if (s[mov] == 'D')
			solve(i+1, j, mov+1);
		else if (s[mov] == 'R')
			solve(i, j+1, mov+1);
		else if (s[mov] == 'L')
			solve(i, j-1, mov+1);
	}
	else{
		solve(i-1, j, mov+1);		//u
		solve(i+1, j, mov+1);		//d
		solve(i, j+1, mov+1);		//r
		solve(i, j-1, mov+1);		//l
	}
	vis[i][j] = false;
}

int main(){
	for(int i = 0; i < 8; i++)
		for(int j = 0; j < 8; j++)
			vis[i][j] = false;
	cin >> s;
	solve(1, 1, 0);
	cout << ans << endl;
}