#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

vector<string> nums = {"1110111", "0010010", "1011101", "1011011", "0111010", "1101011", "1101111", "1010010", "1111111", "1111011"};

//void fill(){
	//for(int i = 0; i < 10; ++i){
		//number[numbers[i]] = i;
		//str[i] = number[i];
	//}
//}

int diff(string &s1, string &s2){
	int ans = 0;
	
	for(int i = 0; i < 8; ++i){
		if((s1[i] == '1') && (s2[i] == '0')) return -1;
		if(s1[i] != s2[i]) ans++;
	}
	return ans;
}

void solve(){
	int n, k; cin >> n >> k;
	vector<string> v(n);
	for(auto &x : v) cin >> x;
	
	queue<pair<string,int>> q, q_next, tmp;
	q.push({"",0});
	
	for(int i = 0; i < n; ++i){
		while(q.size()){
			auto p = q.front(); q.pop();
			//cout << p.f << endl;
			for(int j = 0; j < 10; ++j){
				int ex = diff(v[i], nums[j]);
				if(ex == -1) continue;
				if(ex + p.s > k) continue;
				q_next.push({p.f + to_string(j), ex + p.s});
			} 
		}
		q = q_next;
		q_next = tmp;
	}
	
	string ans = "";
	while(q.size()){
		auto p = q.front(); q.pop();
		if(p.s == k){
			if(p.f > ans) ans = p.f;
		}
	}
	cout << (ans != "" ? ans : "-1") << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

