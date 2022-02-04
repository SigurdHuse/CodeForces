#include <bits/stdc++.h> 
using namespace std; 

int main()
{
	int n, k;
	cin >> n >> k;
	int time = k, cnt = 0;
	while(time <= 4*60 && cnt < n){
		time += 5*(cnt+1);
		cnt++;
	}
	cout << cnt - (time > 4*60) << endl;
}
