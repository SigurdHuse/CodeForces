#include <bits/stdc++.h>
using ll = long long;  
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,d;
	string s;
	cin >> n >> d >> s;
	int indx = n-1;
	int ans = 0;
	bool jumped= 0;
	while(indx > 0){
		jumped = 0;
		for(int i = max(0, indx-d); i < indx;i++){
			if(s[i] == '1'){
				ans++;
				indx = i;
				jumped = 1;
				//cout << indx <<endl;
				break;
			}
		}
		if(!jumped){
			ans = -1;
			break;
		}
	}
	cout << ans << endl;
}
