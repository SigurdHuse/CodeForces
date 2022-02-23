#include <bits/stdc++.h>
using ll = long long;  
using namespace std; 

pair<int,int> find_distance(vector<int> v, int x){
	int n = (int)v.size(), start = 0, end = n-1;
	for(int i = 0; i<n;++i){
		if(v[i] == x){
			start = i;
			break;
		}
	}
	for(int i = n-1;i >= start; --i){
		if(v[i] == x){
			end = i;
			break;
		}
	}
	return {start, end};
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, ans = INT_MAX;
	cin >> n;
	vector<int> v(n);
	unordered_set<int> mx_elements;
	unordered_map<int,int> freq;
	for(int i = 0; i< n;++i){
		cin >> v[i];
		freq[v[i]]++;
	}
	auto p = *max_element(freq.begin(),freq.end(),
						 [](const pair<int, int>& p1, const pair<int, int>& p2) {
							return p1.second < p2.second;});

	int mx = p.second;
	//cout << "MAX " <<mx << endl;
	if(mx == 1){
		cout << 1 << " " << 1 << endl;	
	}
	else{
		for(int i = 0; i < n;++i){
			if(freq[v[i]] == mx) mx_elements.insert(v[i]);
		}
		pair<int,int> tmp, ans_1;
		//for(int i : mx_elements) cout << "int "<<i << endl;
		for(int i : mx_elements){
			tmp = find_distance(v,i);
			if(tmp.second - tmp.first < ans){
				ans_1 = tmp;
				ans = tmp.second - tmp.first;
			}
		}
		cout << ans_1.first +1 <<" "<<ans_1.second+1 <<endl;
	}
}
