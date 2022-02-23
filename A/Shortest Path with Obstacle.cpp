#include <bits/stdc++.h> 
using ll = long long; 
using namespace std; 


int search(int x, int y, int ex, int ey, int nx, int ny){
	if(x < 0 || x >= 1001 || y < 0 || y >= 1001) return 10000;
	if(x == ex && y == ey) return 0;
	if(x == nx && y == ey) return 10000;
	return (min({search(x+1,y,ex,ey,nx,ny),
				search(x-1,y,ex,ey,nx,ny),
				search(x,y+1,ex,ey,nx,ny),
				search(x,y-1,ex,ey,nx,ny)}) + 1);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	int x, y;
	while(tt--){
		cin >> x >> y;
		int start_x = x, start_y = y;
		cin >> x >> y;
		int end_x = x, end_y = y;
		cin >> x >> y;
		int bombx = x, bomby = y;
		cout << search(start_x, start_y, end_x, end_y, bombx,bomby) << endl;
		
	}
}
