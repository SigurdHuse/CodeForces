#include <bits/stdc++.h> 
using ll = long long;
#define REP(i,n) for(int i = 0; i< (n);i++) 
using namespace std; 

void print_vector(vector<int> v){
	for(int i : v) cout << i << " ";
	cout << endl;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt,n;
	cin >> tt;
	while(tt--){
		cin >> n;
		vector<int> v(n);
		REP(i,n) v[i] = n-i;
		print_vector(v);
		REP(i,n-2){
			reverse(v.begin(),v.end());     
			reverse(v.begin(),v.begin()+1);   
			reverse(v.begin()+1,v.end());
			print_vector(v);
		}
		swap(v[0],v[1]);
		print_vector(v);
	}
}
