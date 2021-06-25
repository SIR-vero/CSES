#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, x, temp;
	cin >> n >> x;
	map<int, vector<int>> numToInd;
	for(int i = 0; i < n; i++){
		cin >> temp;
		numToInd[temp].push_back(i);
	}
	int pos1 = -1, pos2 = -1;
	
	/*cerr << "numToInd:\n";
	for(auto i : numToInd){
		cout << i.first << " ";
	}
	cerr << endl;*/
	
	for(auto i : numToInd){
		//cerr << "i.first = " << i.first << " ";
		if(x >= i.first && x-i.first != i.first && numToInd[x-i.first].size() > 0 && numToInd[i.first].size() > 0){
			pos1 = numToInd[i.first][0];
			pos2 = numToInd[x-i.first][0];
			//cerr << "here1 : " << pos1 << " : " << pos2 << endl;
			break;
		}
		else if(x >= i.first && x-i.first == i.first && numToInd[i.first].size() > 1){
			pos1 = numToInd[i.first][0];
			pos2 = numToInd[i.first][1];
			//cerr << "here2 : " << pos1 << " : " << pos2 << endl;
			break;
		}
	}
	//cout << "here\n";
	if (pos1 == -1)
		cout << "IMPOSSIBLE";
	else 
		cout << pos1+1 << " " << pos2+1 << endl;
}