#include <bits/stdc++.h> 
using ll = long long; 
using namespace std; 

int main()
{
	int t;
	cin >> t;
	for(int _ = 0; _ < t; _ ++){
		ll x,y,z;
		cin >> x >> y >> z;
		if(x == y && x >= z){
			cout << "YES" <<endl;
			if(y == z){
				cout << y <<" "<< y << " " << y<<endl;
			}
			else cout << y << " " << 0 << " " << 0 << endl;
		}
		else if(x == z && x >= y){
			cout << "YES" <<endl;
			if(y == z){
				cout << y <<" "<< y << " " << y <<endl;
			}
			else cout << x << " " << x << " " << x-1 << endl;
		}
		else if(y == z && y >= x){
			cout << "YES" <<endl;
			if(x == z){
				cout << y <<" "<< y << " " <<y<< endl;
			}
			else cout << y << " " << y << " " << y-1 << endl;
		}
		else cout << "NO" << endl;
	}
}
