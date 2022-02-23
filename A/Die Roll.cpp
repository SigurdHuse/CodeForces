#include <bits/stdc++.h> 
using namespace std; 

int main()
{
	int a, b;
	cin >> a >> b;
	int tmp = 7 - max(a, b);
	if(tmp == 3) cout << 1 <<'/' <<2 <<endl;
	else if(tmp == 2 || tmp == 4){
		cout << tmp/2 << '/' << 3 <<endl;
	}
	else if(tmp == 6) cout << 1 << '/' <<1<<endl;
	else cout << tmp << '/' << 6 << endl;
}
