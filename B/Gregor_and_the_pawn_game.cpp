#include <bits/stdc++.h> 
using namespace std; 

int solve(string a, string b, int n){
	int ans = 0;
	//cout << a << endl << b<<endl;
	if(a[0] == '1'){
		if(b[0] == '0'){
			ans++;
			b[0] = '2';
		}
		else if(b[1] == '1'){
			ans++;
			b[1] = '2';
		}
	}
	for(int i = 1; i < n-1; i++){
		if(a[i] == '1'){
			if(b[i-1] == '1'){
				ans ++;
				b[i-1] = '2';
			}
			else if(b[i] == '0'){
				ans++;
				b[i] = '2';
			}
			else if(b[i+1] == '1'){
				ans++;
				b[i+1] = '2';
			}
		}
	}
	if(a[n-1] == '1'){
		if(b[n-1] == '0' || b[n-2] == '1') ans++;
	}
	return ans;
}


int main()
{
	int t,n;
	cin >> t;
	for(int i = 0; i< t;i++){
		cin >> n;
		string one, two;
		cin >> two >> one;
		//cout << one << endl << two;
		cout << solve(one,two, n) << endl;
	}
}
