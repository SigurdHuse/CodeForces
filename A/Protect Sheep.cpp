#include <bits/stdc++.h>
using ll = long long;  
using namespace std; 


bool search(vector<string> &v, int R, int C){
	for(int j = 0; j < R;j++){
		for(int i = 0; i < C;++i){
			if(v[j][i] == 'S'){
				if(v[min(j+1,R-1)][i] == 'W') return 0;
				if(v[max(0,j-1)][i] == 'W') return 0;
				if(v[j][min(i+1,C-1)] == 'W')return 0;
				if(v[j][max(i-1,0)] == 'W')return 0;
			}
			else if(v[j][i] != 'W'){
				v[j][i] = 'D';
			}
		}
	}
	return 1;	
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int R, C;
	cin >> R >> C;
	vector<string> v(R);
	for(int i = 0; i< R; ++i)cin >> v[i];
	bool ans = search(v, R, C);
	if(!ans) cout << "NO" <<endl;
	else{
		cout << "YES" << endl;
		for(int j = 0; j < R;j++){
			for(int i = 0; i < C;++i){
				cout << v[j][i];
			}
			cout << endl;
		}
	}
} 












